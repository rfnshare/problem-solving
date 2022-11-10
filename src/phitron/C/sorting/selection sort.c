#include <stdio.h>
int main()
{
    int i, j, temp, arr[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int sort_arr[8];
    for (j = 0; j < 8; j++)
    {
        int min = arr[0], min_index = 0;
        for (i = 0; i < 8; i++)
        {
            // printf("%d ", arr[i]);
            if (arr[i] <= min)
            {
                temp = min;
                min = arr[i];
                min_index = i;
            }
        }
        sort_arr[j] = min;
        arr[min_index] = 9999;
    }
    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", sort_arr[i]);
    }
}