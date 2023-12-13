#include<stdio.h>
int main()
{
    int n,c,k=0;
    scanf("%d",&n);
    while(n!=0)
    {
        c=n%10;
        k=k*10+c;
        n/=10;
    }
    printf("%d",k);
}