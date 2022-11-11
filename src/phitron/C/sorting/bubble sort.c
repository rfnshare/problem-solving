#include <stdio.h>
int main()
{
    int i, j, temp, arr[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < 8 - 1; i++)
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
            i = -1;
        }
    }
    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
}