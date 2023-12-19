#include<stdio.h>
#include<math.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int oddsum=0,evensum=0;
    for(i=0;i<a;i++)
    {
        if(arr[i]%2!=0)
        {
             oddsum+=arr[i];
        }
        else
        {
           evensum+=arr[i];   
        }
       
    }
    printf("%d",abs(oddsum-evensum));
}