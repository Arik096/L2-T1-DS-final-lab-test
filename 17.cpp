#include <bits/stdc++.h>
#define MAX 5
long long int a[MAX];
long long int rear = - 1;
long long int Front = - 1;
int main ()
{
          while(1)
  {
long long int add;
   printf("Inset the element in queue : ");
        scanf("%lld", &add);
        if (rear == MAX - 1)
    {
              printf("\nQueue Overflow \n");
    }
    else
    {
        if (Front == - 1)
        Front = 0;
        rear = rear + 1;
        a[rear] = add;
        printf("inserted element %lld\n",a[rear]);
    }
  }
    return NULL;
}

