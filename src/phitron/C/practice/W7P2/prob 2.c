#include <stdio.h>
int bubble_sort(int arr[], n);
int swap(int* a, int* b);
int main()
{
    int arr[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int bubble_sort(int arr[], n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
            else
            {
                continue;
            }
        }
    }
}
int swap(int* a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}