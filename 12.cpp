#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int n,k;
          scanf("%lld",&n);
          long long int a[n];
          for(k=0;k<n;k++)
          {
                    scanf("%lld",&a[k]);
          }
          int i, j, temp;
          for (i = 0; i < n-1; i++)
                    {
                             temp = i;
                              for (j = i+1; j < n; j++)
                                        {
                                                  if (a[j] < a[temp])
                                                            {
                                                                      temp= j;
                                                            }
                                                            swap(a[temp], a[i]);
                                        }
                    }
          for(k=0;k<n;k++)
         {
                    printf("%lld\n",a[k]);
          }
          return NULL;
}
