#include <stdio.h>
#include <stdbool.h>
void print_grid(int arr[][4]);
int main()
{
    int a, b, i, j, k;
    int arr[4][4];
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            arr[i][j] = -1;
        }
    }
    bool p1 = true;
    bool p2 = false;
    int r, c;
    while (true)
    {
        print_grid(arr);
        if (p1)
        {
        Flag:
            printf("Player 1 Turn (X), Enter Row & Column : ");
            scanf("%d%d", &r, &c);
            if (arr[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag;
            }
            arr[r][c] = 1;

            p1 = false;
            p2 = true;
        }
        else
        {
        Flag2:
            printf("Player 2 Turn (O), Enter Row & Column : ");
            scanf("%d%d", &r, &c);
            if (arr[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag2;
            }
            arr[r][c] = 2;
            p2 = false;
            p1 = true;
        }
    }
    return 0;
}
void print_grid(int arr[][4])
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            if (arr[i][j] == -1)
            {
                printf(" ");
            }
            if (arr[i][j] == 1)
            {
                printf("X");
            }
            if (arr[i][j] == 2)
            {
                printf("O");
            }

            if (j < 3)
            {
                printf("\t|\t");
            }
        }
        printf("\n");
        if (i < 3)
        {
            printf("____________________________________");
        }

        printf("\n\n");
    }
}