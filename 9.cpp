#include <bits/stdc++.h>
int main()
{
   long long int c, first, last, middle, n, key;
   scanf("%lld",&n);
   long long int a[n];
   for (c = 0; c < n; c++)
      {
                scanf("%lld",&a[c]);
      }
   scanf("%lld", &key);
   first = 0;
   last = n - 1;
   while (first <= last)
          {
      middle = (first + last)/2;
      if (a[middle] < key)
         {
                   first = middle + 1;
         }
      else if (a[middle] == key)
          {
         printf("\n%lld found at index %lld\n", key, middle);
         break;
      }
      else
         {
                   last = middle - 1;
         }
   }
   if (first > last)
     {
               printf("%lld is not present in the array\n", key);
     }
   return NULL;
}
