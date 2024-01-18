#include<stdio.h>
int main()
{
    int x,y,i,j;
    scanf("%d%d",&x,&y);
    int mat1[x][y],mat2[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",mat1[i][j]+mat2[i][j]);
        }
    printf("
");
    }
}