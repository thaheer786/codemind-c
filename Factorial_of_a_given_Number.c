#include<stdio.h>
int main()
{
    int i,n,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c*=i;
    }
    printf("%d",c);
}


 