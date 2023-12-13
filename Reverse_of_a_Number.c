#include<stdio.h>
int main()
{
    int n,a,b=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        b=b*10+a;
        n/=10;
    }
    printf("%d",b);
}