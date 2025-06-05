#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];  
int top = -1;    


void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    top++;              
    stack[top] = value; 
    printf("Pushed %d onto the stack.\n", value);
}


int pop() {
    if (top == -1) {
        printf("Stack Underflow! No elements to pop.\n");
        return -1;  
    }
    int poppedValue = stack[top];  
    top--;  
    printf("Popped %d from the stack.\n", poppedValue);
    return poppedValue;
}


void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
