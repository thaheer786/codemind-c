#include<stdio.h>
int main()
{
    int a,years,weeks;
    scanf("%d",&a);
    years=a/365;
    weeks=(a%365)/7;
    printf("%d
%d",years,weeks);
}