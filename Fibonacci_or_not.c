#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
         if(n==c)
         {
             count++;
             break;
         }
        a=b;
        b=c;
    } 
    if(count==1)
    printf("True");
    else 
    printf("False");
}