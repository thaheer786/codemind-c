#include<stdio.h>
int main()
{
    int x,y,i,j,c=0;
    scanf("%d%d",&x,&y);
    int arr[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int n;
    scanf("%d",&n);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
          if(n==arr[i][j])
          c++;
        }
    }
    if(c>0)
    printf("1");
    else 
    printf("0");
}