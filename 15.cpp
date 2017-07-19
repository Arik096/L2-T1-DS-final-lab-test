#include <bits/stdc++.h>
#define MAX 5
long long int top = 4;
long long int stk[MAX]={12,13,14,15,16};
int main ()
{
          while(1)
  {
            long long int num;
   printf ("Enter to pop a element");
   getchar();
        if (top == - 1)
    {
        printf ("\nStack is Empty\n");
        return NULL;
    }
    else
    {
        num = stk[top];
        printf ("poped element is = %d\n", stk[top]);
        top = top - 1;
    }
  }
    return NULL;
}
