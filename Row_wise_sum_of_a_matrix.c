#include<stdio.h>
int main()
{
    int x,y,i,j,sum=0;
    scanf("%d%d",&x,&y);
    int arr[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<x;i++)
    {
        sum=0;
        for(j=0;j<y;j++)
        {
            sum+=arr[i][j];
        }
    
    printf("%d ",sum);
}
}