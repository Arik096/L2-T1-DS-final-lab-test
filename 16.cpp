#include <bits/stdc++.h>
#define MAX 5
int top = -1;
int stk[MAX];
void push();
void  pop();
void display();

int main ()
{
    int choice;
    while (1)
    {
        printf (" \n1 --> PUSH\n");
        printf ("2 --> POP\n");
        printf ("3 --> DISPLAY\n");
        printf ("4 --> EXIT\n");

        printf ("Enter your choice:");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
          printf("\ninvalid\n");
        }

    }
    return 0;
}
void push ()
{
    int num;
    if (top == (MAX - 1))
    {
        printf ("\nStack is Full\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed:");
        scanf ("%d", &num);
        top = top + 1;
        stk[top] = num;
    }
}
void pop ()
{
    int num;
    if (top == - 1)
    {
        printf ("\nStack is Empty\n");
        return;
    }
    else
    {
        num = stk[top];
        printf ("\npoped element is = %d\n", stk[top]);
        top = top - 1;
    }
}
void display ()
{
    int i;
    if (top == -1)
    {
        printf ("\nStack is empty\n");
        return;
    }
    else
    {
        printf ("\nThe status of the stack is \n");
        for (i = top; i >= 0; i--)
        {
            printf ("%d\n", stk[i]);
        }
    }
    printf ("\n");
}
