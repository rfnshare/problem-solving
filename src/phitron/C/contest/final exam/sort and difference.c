#include<stdio.h>
int asc_sort(int arr[], int n);
int desc_sort(int arr[], int n);
void swap(int *p, int* q);
int main()
{
    int n, i,j;
    scanf("%d",&n);
    int arr1[n], arr2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr2[i]);
    }
    asc_sort(arr1,n);
    desc_sort(arr2,n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]-arr2[i]);
    }
    // printf("\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", arr2[i]);
    // }
}
int asc_sort(int arr[], int n)
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for(j=0;j<n-1;j++)
        {
            if (arr[j] < arr[j + 1])
            {
                continue;
            }
            else
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int desc_sort(int arr[], int n)
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for(j=0;j<n-1;j++)
        {
            if (arr[j] >arr[j + 1])
            {
                continue;
            }
            else
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void swap(int *p, int* q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}