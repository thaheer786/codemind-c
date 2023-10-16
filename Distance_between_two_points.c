#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2;
    float dist,side1,side2;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    side1=pow(x2-x1,2);
    side2=pow(y2-y1,2);
    dist=sqrt(side1+side2);
    printf("%.4f",dist);
}