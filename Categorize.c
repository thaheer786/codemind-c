#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x<150.0)
    printf("The person is Dwarf.");
    else if(x>150.0&&x<=165)
    printf("The person is average heighted.");
    else if(x>165.0&&x<=195)
    printf("The person is taller.");
    else 
    printf("Abnormal height.");
}