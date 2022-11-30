#include <stdio.h>
void find_max_min(int n, int arr[], int *p, int *q);
int main()
{
    int a, b, i, j, k;
    int arr[] = {12, 6, 5, 3, 7, 21, 66};
    int n = 7, max, min;
    // printf("%d",sizeof(arr)/sizeof(int)); //size of array calculate
    find_max_min(n, arr, &max, &min);
    printf("Maximum value is %d\n", max);
    printf("Minimum value is %d\n", min);
    return 0;
}
void find_max_min(int n, int arr[], int *p, int *q)
{
    int i, max = 0, min = arr[0];
    ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }
    *p = max;
    *q = min;
}