#include <stdio.h>
#include <stdbool.h>
void print_grid(int arr[][4]);
int result(int arr[][4]);
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
        if (result(arr) == 1)
        {
            printf("Player 1 Won\n");
            print_grid(arr);
            break;
        }
        else if (result(arr) == 2)
        {
            printf("Player 2 Won\n");
            print_grid(arr);
            break;
        }
        // else
        // {
        //     printf("Draw\n");
        //     break;
        // }
    }
    return 0;
}
int result(int arr[][4])
{
    int i, j, k;
    for (i = 1; i <= 3; i++)
    {
        if (arr[i][1] == arr[i][2] && arr[i][2] == arr[i][3] && arr[i][1] != -1)
        {
            return arr[i][1];
        }
    }
    for (j = 1; j <= 3; j++)
    {
        if (arr[1][j] == arr[2][j] && arr[2][j] == arr[3][j] && arr[1][j] != -1)
        {
            return arr[1][j];
        }
    }
    if (arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3] && arr[1][1] != -1)
    {
        return arr[1][1];
    }
    if (arr[1][3] == arr[2][2] && arr[2][2] == arr[3][1] && arr[1][3] != -1)
    {
        return arr[1][3];
    }

    return -1;
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