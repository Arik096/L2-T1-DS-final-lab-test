#include <bits/stdc++.h>
#define MAX 5
long long int a[MAX]={12,13,14,15,16};
long long int rear = 4;
long long int Front = 0;
int main ()
{
          while(1)
  {
long long int add;
   printf ("Enter to pop a element");
   getchar();
        if (Front == - 1 || Front > rear)
    {
        printf("\nQueue Underflow \n");
        return NULL;
    }
    else
    {
        printf("\nElement deleted from queue is : %d\n", a[Front]);
        Front = Front + 1;
    }
  }
    return NULL;
}


