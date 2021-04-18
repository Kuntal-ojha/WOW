// Data Structures  Stack
// Created by KUNTAL OJHA RAJ on 3/15/2021.
// Stack some operation like push, pop , top, display, overflow, underflow,peek or top
#include <stdio.h>
#include <conio.h>
#define N 5
int stack [N];
int top=-1;
void push()
{
    int x;
    printf("Enter data:\n");
    scanf("%d",&x);
    if (top==N-1)
    {
        printf("Over flow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if (top==-1)
    {
        printf("Under flow");
    }
    else
    {
        item=stack[top];
        top--;
        printf("%d",item);
    }
}
void peek()
{
    if (top==-1)
    {
        printf("Stack is Empty.");
    } else
    {
        printf("%d",stack[top]);
    }
}
void display()
{
    int i;
    for (i=top; i>=0; i++)
    {
        printf("%d",stack[i]);
    }
}
void Main()
{
    push();
    pop();
    peek();
    display();
    int ch;
   // clesu ();
    do {
        printf("Enter chose:\n0 Exit\n1 Push\n2 Pop\n3 peek\n4 Display\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("Invalid Choice.");
        }
    } while (ch!=0);
}

