#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    x=b*c;
    if(x>=a)
    printf("YES");
    else
    printf("NO");
}