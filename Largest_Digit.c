#include<stdio.h>
int main()
{
    int n,a,b=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n/=10;
        if(b<a)
        {
            b=a;
        }
    }
    printf("%d",);
}