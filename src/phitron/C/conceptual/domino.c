#include <stdio.h>
int main()
{
    int rows, columns;
    scanf("%d%d", &rows, &columns);
    if(rows==1 && columns==1)
    {
        printf("0");
    }
    else if(rows==1 && columns>1)
    {
        printf("%d", columns-1);
    }
    else if(columns==1 && rows>1)
    {
        printf("%d", rows-1);
    }
    else
    {
        printf("%d", (columns-1)*rows);
    }
}