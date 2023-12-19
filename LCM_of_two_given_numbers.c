#include<stdio.h>
int main()
{
    int i,a,b,l;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        l=a*i;
        if(l%b==0)
        break;
    }
    if(l%b==0)
    printf("%d",l);
}