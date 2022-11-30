#include <stdio.h>
int arr_print(int arr[], n);
int main()
{
    int arr[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr_print(arr,n);
    
}
int arr_print(int arr[], n)
{
    int i;
   for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    } 
}