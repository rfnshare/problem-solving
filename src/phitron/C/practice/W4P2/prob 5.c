#include <stdio.h>
int main()
{
    int i, j, k, r, arr[10], row, column, arr2[10], count = 0;
    scanf("%d", &r);
    for (i = 0; i < r; i++)
    {
        scanf("%d%d", &row, &column);
        arr[i] = row;
        arr2[i] = column;
    }
    for (i = 0; i < r; i++)
    {

        for (j = i; j < r - 1; j++)
        {
            if (arr[i] == arr[j + 1] || arr2[i] == arr2[j + 1])
            {

                arr[i] = 0;
                arr[j + 1] = 0;
                arr2[i] = 0;
                arr2[j + 1] = 0;
            }
        }
    }

    for (i = 0; i < r; i++)
    {
        if (arr[i] != 0)
        {
            count++;
            // printf("%d %d\n", arr[i], arr2[i]);
        }
        else
        {
            continue;
            ;
        }
    }
    printf("Safe rooks - %d\n", count);
    for (i = 0; i < r; i++)
    {
        if (arr[i] != 0)
        {

            printf("%d %d\n", arr[i], arr2[i]);
        }
        else
        {
            continue;
            ;
        }
    }
}