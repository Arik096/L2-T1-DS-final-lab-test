#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    long long int i;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%lld\n",a[i]);
    }
    return 0;
}
