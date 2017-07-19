#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int n,i,minimum=4294967295;
          scanf("%lld",&n);
          long long int a[n];
          for(i=0;i<n;i++)
          {
                    scanf("%lld",&a[i]);
                    if(a[i]<minimum)
                    {
                            minimum=a[i];
                    }
          }
          printf("%lld\n",minimum);
          return NULL;
}
