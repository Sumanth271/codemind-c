#include<stdio.h>
int main()
{
    int m,n,i,j,a,b;
    int arr1[10][10],arr2[10][10],arr3[10][10];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int x=a,y=b;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            arr3[i][j]=arr1[i][j] + arr2[i][j];
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("
");
    }
}