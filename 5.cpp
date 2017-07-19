#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int n,i,first=4294967295,second=4294967295;
          scanf("%lld",&n);
          long long int a[n];
          for(i=0;i<n;i++)
          {
                    scanf("%lld",&a[i]);
                    if (a[i] < first)
                              {
                                        second = first;
                                        first = a[i];
                              }
                    else if (a[i] < second && a[i] != first)
                              {
                                        second = a[i];
                              }
          }
          printf("1st max=%lld\n2nd max=%lld\n",first,second);
          return NULL;
}
