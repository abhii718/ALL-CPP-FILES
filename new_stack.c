#include <stdio.h>
#include <stdlib.h>

#define MAX 4
int stack_arr[MAX];
int top = -1;

int isFull()
{
    if (top == MAX + 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int data)
{
    if (isFull())
    {
        printf("stack overflow\n");
        return;
    }
    else
    {
        top = top + 1;
        stack_arr[top] = data;
    }
}
int pop()
{
    if (isEmpty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    else
    {
        int value;
        value = stack_arr[top];
        top -= 1;
        return value;
    }
}
int peek()
{
    if (isEmpty)
    {
        printf("stack underflow\n");
        exit(1);
    }
    else
    {
        return stack_arr[top];
    }
}
void print()
{
    int i;
    if (top == -1)
    {
        printf("stack undrflow");
        return;
    }
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack_arr[i]);
    }
}
int main()
{
    int choice, data;
    while (1)
    {
        printf("\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. print the top element\n");
        printf("4. print all the element of the stack\n");
        printf("5. quit\n");
        printf("please enter you choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("Deleted element is %d: ", data);
            break;
        case 3:
            printf("The tpmost element of the stack is %d\n", peek());
            break;
        case 4:
            print();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf(" enter 1 to 5 only");
            break;
        }
    }
    return 0;
}