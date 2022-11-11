#include <stdio.h>
int main()
{
    int i, j, temp, arr[11] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    for (j = 0; j < 11; j++)
    {
        for (i = 0; i < 11 - 1; i++)
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
            }
        }
        for (i = 0; i < 11; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}