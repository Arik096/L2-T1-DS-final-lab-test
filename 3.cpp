#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int n,i,maximum=0;
          scanf("%lld",&n);
          long long int a[n];
          for(i=0;i<n;i++)
          {
                    scanf("%lld",&a[i]);
                    if(a[i]>maximum)
                    {
                            maximum=a[i];
                    }
          }
          printf("%lld\n",maximum);
          return NULL;
}

