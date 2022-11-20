#include <stdio.h>
int main()
{
    int a, b, i, j, k, sum = 0;
    int t, arr[1000][100], min, p[2000], q = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &a);
        for (j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        p[i] = a;
    }

    for (int i = 0; i < t; i++)
    {
        min = arr[i][0];
        for (j = 0; j < p[i]; j++)
        {
            sum += arr[i][j];
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
        q = min * p[i];
        k = sum - q;
        printf("%d\n", k);
        sum = 0;
        k = 0;
        q = 0;
    }
}