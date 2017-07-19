#include<bits/stdc++.h>
using namespace std;
int main()
{
          long long int n,i,key,counter=0;
          scanf("%lld",&n);
          long long int a[n];
          for(i=0;i<n;i++)
          {
                    scanf("%lld",&a[i]);
          }
          scanf("%lld",&key);
          for(i=0;i<n;i++)
          {
                    if(key==a[i])
                    {
                              counter++;
                    }
          }
          if(counter!=0)
          {
                    printf("%lld times\n",counter);
          }
          else
          {
                    printf("%lld not present\n",key);
          }
          return NULL;
}

