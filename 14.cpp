#include <bits/stdc++.h>
#define MAX 5
long long int top = -1;
long long int stk[MAX];
int main ()
{
          while(1)
  {
            long long int num;
   printf ("Enter the element to be pushed:");
   scanf ("%lld", &num);
        if (top == (MAX - 1))
    {
        printf ("\nStack is Full\n");
        return NULL;
    }
    else
    {
        top = top + 1;
        stk[top] = num;
        printf("pushed element %lld\n",stk[top]);
    }
  }
    return NULL;
}
