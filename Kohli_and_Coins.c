#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%5==0&&a%10==0)
    printf("%d",a/10);
    else if(a%5==0&&a%10!=0&&a>=10)
    printf("%d",(a/10)+1);
    else if(a%5==0&&a%10!=0&&a<10)
    printf("%d",(a/5));
    else
    printf("-1");
    
}