#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a<=10000)
    printf("%.2f",(a+((80*a)/100)+((20*a)/100)));
    else if(a<=20000)
    printf("%.2f",(a+((90*a)/100)+((25*a)/100)));
    else if(a>2000)
    printf("%.2f",(a+((95*a)/100)+((30*a)/100)));
}