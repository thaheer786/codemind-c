#include <stdio.h>
int main() 
{
    int x,y;
    scanf("%d%d",&x,&y);
    int matrix[x][y];
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++) 
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int a=0,b=0;
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            if (matrix[i][j]%2==0) 
            {
                a=a+matrix[i][j];
            } 
            else
            {
                b=b+matrix[i][j];
            }
        }
    }
     printf("%d %d",a,b);
}