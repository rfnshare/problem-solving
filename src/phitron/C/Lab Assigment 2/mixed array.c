#include <stdio.h>
int is_prime(int a);
float find_avg(int arr[], int a);
int main()
{
    int n, arr[100], i, count = 0;
    float avg;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (is_prime(arr[i]) == 1)
        {
            count++;
        }
    }
    avg = find_avg(arr, n);
    printf("Prime Numbers: %d\n", count);
    printf("Average of all even integers: %.2f", avg);
}
float find_avg(int arr[], int a)
{
    int i, sum = 0, temp;
    int *p = &arr[0];
    float count = 0;
    for (i = 0; i < a; i++)
    {
        temp = *(p + i);
        if (temp % 2 == 0)
        {
            sum += temp;
            count++;
        }
    }
    return sum / count;
}
int is_prime(int a)
{
    int r, flag = 1;
    r = sqrt(a);
    if (a == 1)
    {
        flag = 1;
    }
    else if (a == 2)
    {
        flag = 1;
    }
    else
    {
        for (int i = 2; i <= r; i++)
        {
            if (a % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    return flag;
}