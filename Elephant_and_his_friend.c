#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    printf("1");
    else if(n==2)
    printf("2");
    else if(n==3)
    printf("3");
    else if(n==4)
    printf("4");
    else if(n%5==0)
    printf("%d",n/5);
    else
    printf("%d",(n/5)+1);
}