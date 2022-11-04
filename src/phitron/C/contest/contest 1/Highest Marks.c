#include <stdio.h>
int main()
{
    int i, j, N, marks[100], max = 0, min = 0;
    scanf("%d", &N);
    if (1 <= N && N <= 100)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &marks[i]);

            if (marks[i] > max)
            {
                max = marks[i];
            }
            else if (min > marks[i])
            {
                min = marks[i];
            }
        }
        for (i = 0; i < N; i++)
        {
            printf("%d ", max-marks[i]);
        }

    }
}