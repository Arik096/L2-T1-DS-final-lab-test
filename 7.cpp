#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int n,i;
          scanf("%lld",&n);
          long long int  a[n],sum=0;
          for(i=0;i<n;i++)
          {
                    scanf("%lld",&a[i]);
                    sum=sum+a[i];
          }
          printf("%lld\n",sum/n);
          return NULL;
}
