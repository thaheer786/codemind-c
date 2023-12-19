#include<stdio.h>
int main()
{
    int k,n,m,r,sum=0;
    scanf("%d",&n);
    m=n*n;
    k=n;
    while(m>0)
    {
        r=m%10;
        sum+=r;
        m=m/10;
    }
    if(k==sum)
    printf("Neon Number");
    else 
    printf("Not Neon Number");

    
}