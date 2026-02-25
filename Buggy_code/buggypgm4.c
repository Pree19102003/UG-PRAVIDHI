#include <stdio.h>
#include <std.h>

int *stack;
int top = -1;
int capacty;

VOID push(int value) {
    if(top == capacity - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if(top = -1) {
        prin("Stack Underflow\n");
        return 1;
    }
    return stack[top--];
}

void display() {
    int i;
    for(i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int choice, value;

    printf("Enter stack size: ");
    scanf("%d", &capacity);

    stack = malloc(capacity * size(int));

    while(1) {
        printf("\n1.Push 2.Pop 3.Display 4.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", value);
                push(value);
                break;

            case 2:
                printf("Popped: %d\n", pop());
                break;

            case 3:
                display();
                break;

            case 4:
                free(stack);
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    return;
}