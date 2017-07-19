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
          long long int i, key, j;
          for (i = 1; i < n; i++)
                    {
                              key = a[i];
                              j = i-1;
                              while (j >= 0 && a[j] > key)
                                        {
                                                  a[j+1] = a[j];
                                                  j = j-1;
                                        }
                              a[j+1] = key;
                    }
                    for(k=0;k<n;k++)
          {
                    printf("%lld\n",a[k]);
          }
          return NULL;
}
