#include <stdio.h>
int main()
{
    int a;
    char days[10];
    scanf("%d", &a);
    switch(a)
    {
    case 0:
        strcpy(days,"Sunday");
        break;
    case 1:
        strcpy(days,"Monday");
        break;
    case 2:
        strcpy(days,"Tuesday");
        break;
    case 3:
        strcpy(days,"Wednusday");
        break;
    case 4:
        strcpy(days,"Thrusday");
        break;
    case 5:
        strcpy(days,"Friday");
        break;
    case 6:
        strcpy(days,"Saturday");
        break;
    default:
        strcpy(days,"Invalid Input");
        break;
    }
    printf("%s", days);
}
