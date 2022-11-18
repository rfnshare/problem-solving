#include <stdio.h>
int main()
{
    int i, j, temp, n, sum = 0, p[20], q = 0, max = 0, o_count = 0, e_count = 0;
    scanf("%d", &n);
    int arr[100];
    if (2 < n)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                e_count++;
            }
            else
            {
                o_count++;
            }
        }
        if (1 == e_count && 2 <= o_count)
        {
            for (i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    printf("%d", arr[i]);
                }
            }
        }
        else if (1 == o_count && 2 <= e_count)
        {
            for (i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    if (0 < arr[i])
                    {
                        for (j = 0; j < n - 1; j++)
                        {
                            if (i == j)
                            {
                                continue;
                            }
                            else
                            {
                                if (arr[j] % 2 == 0)
                                {
                                    sum = arr[i] + arr[j];
                                    if (sum % 2 == 0)
                                    {
                                        p[q] = sum;
                                        q += 1;
                                    }
                                    sum = 0;
                                }
                            }
                        }
                    }
                }
            }
            for (i = 0; i < q; i++)
            {
                if (p[i] > max)
                {
                    max = p[i];
                }
            }
            printf("%d", max);
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    if (0 < arr[i])
                    {
                        for (j = 0; j < n - 1; j++)
                        {
                            if (i == j)
                            {
                                continue;
                            }
                            else
                            {
                                if (arr[j] % 2 == 0)
                                {
                                    sum = arr[i] + arr[j];
                                    if (sum % 2 == 0)
                                    {
                                        p[q] = sum;
                                        q += 1;
                                    }
                                    sum = 0;
                                }
                            }
                        }
                    }
                }
                else if (arr[i] % 2 != 0)
                {
                    if (0 < arr[i])
                    {
                        for (j = 0; j < n - 1; j++)
                        {
                            if (i == j)
                            {
                                continue;
                            }
                            else
                            {
                                if (arr[j] % 2 != 0)
                                {
                                    sum = arr[i] + arr[j];
                                    if (sum % 2 == 0)
                                    {
                                        p[q] = sum;
                                        q += 1;
                                    }
                                    sum = 0;
                                }
                            }
                        }
                    }
                }
            }
            for (i = 0; i < q; i++)
            {
                if (p[i] > max)
                {
                    max = p[i];
                }
            }
            printf("%d", max);
        }
    }
    else if (n == 2)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        i = 0;
        sum = arr[i] + arr[i + 1];
        if (sum % 2 == 0)
        {
            printf("%d", sum);
        }
        else if (arr[i] > arr[i + 1])
        {
            if (arr[i] % 2 == 0)
            {
                printf("%d", arr[i]);
            }
            else if (arr[i + 1] % 2 == 0)
            {
                printf("%d", arr[i + 1]);
            }
        }
        else if (arr[i + 1] % 2 == 0)
        {
            printf("%d", arr[i + 1]);
        }
    }
    else if (n == 1)
    {
        i = 0;
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            printf("%d", arr[i]);
        }
    }
}