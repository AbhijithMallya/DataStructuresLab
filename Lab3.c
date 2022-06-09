#include <stdlib.h>
#include <stdio.h>
#define MAX 5
int stack[MAX], top = -1, item;
void push() // Inserting element into the stack
{
    if (top == (MAX - 1))
    {
        printf("Stack Overflow!!\n");
    }
    else
    {
        printf("Enter the element to be inserted: ");
        scanf("%d", &item);
        stack[++top] = item;
    }
}
void pop() // deleting an element from the stack
{
    if (top == -1)
    {
        printf("Stack Underflow!!\n");
    }
    else
    {
        item = stack[top--];
        printf("The popped element: %d\n", item);
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("The stack elements are:\n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
void palindrome()
{
    int j = top, k = 0, flag = 0;
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }
    while (k <= top / 2)
    {
        if (stack[k++] != stack[j--])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("Stack contents are not a palindrome\n");
    }
    else
    {
        printf("Stack contents are palindrome\n");
    }
}

main()
{
    int choice;
    while (1)
    {
        choice = 0;
        printf("--------STACK OPERATIONS-----------\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Palindrome\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("-----------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            palindrome();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice:\n");
            return;
        }
    }
}