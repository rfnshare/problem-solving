#include <stdio.h>
int find_median(int arr[], int a);
int main()
{
    int a, b, i, j, k;
    scanf("%d", &a);
    int arr[a];
    for (i = 1; i <= a; i++)
    {
        scanf("%d", &arr[i]);
    }
    j = find_median(arr, a);
    printf("Median = %d", j);
}

int find_median(int arr[], int a)
{
    int i, t, res;
    bubble_sort(arr, a);
    if (a % 2 == 0)
    {
        t = a / 2;
        res = (arr[t] + arr[t + 1]) / 2;
        return res;
    }
    else
    {
        t = a / 2;
        return arr[t + 1];
    }
}
int bubble_sort(int arr[], int a)
{
    int i, j, temp;
    for (j = 1; j <= a; j++)
    {
        for (i = 1; i <= a - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                continue;
            }
            else
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                // i = -1;
            }
        }
    }
    return arr;
}