#include <stdio.h>
int solve(int arr[], int n);
int main()
{
    int n, arr[100], i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = n / 2;
    if (x <= solve(arr, n))
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }
}
int solve(int arr[], int n)
{
    int i, temp, count = 0;
    int *p = &arr[0];
    for (i = 0; i < n; i++)
    {
        while (0 < *(p + i))
        {
            temp = *(p + i) % 10;
            if (temp == 7)
            {
                count++;
                break;
            }
            *(p + i) /= 10;
        }
    }
    return count;
}