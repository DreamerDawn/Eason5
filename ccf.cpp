#include<bits/stdc++.h>
using namespace std;
int a[1000000],n=1;
int main()
{
    a[1]=1;
    for(int i=1;i<=10000;i++)
    {
        int x=0;
        for(int j=1;j<=n;j++)
        {
            a[j]=a[j]*2+x;
            x=a[j]/10;
            a[j]%=10;
        }
        if(x) a[++n]=x;
        printf("%d ",i);
        for(int j=n;j>=1;j--)
        {
            printf("%d",a[j]);
        }
        printf("\n");
    }
    return 0;
}
