#include <stdio.h>
int main()
{
    int arr[6] = {12, 7, 19, 26, 11, 6};
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 6; i++)
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
    printf("Maximum value is %d\n", max);
    printf("Minimum value is %d\n", min);
}