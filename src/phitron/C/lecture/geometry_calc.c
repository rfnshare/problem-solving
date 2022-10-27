#include <stdio.h>
#define PI 3.1416
int main()
{
    int choice;
    float radius, length, height, width, len;
    printf("For Circle, Enter 1 \n");
    printf("For Square, Enter 2 \n");
    printf("For Rectangle, Enter 3 \n");
    printf("For Triangle, Enter 4 \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter Radius: \n");
        scanf("%f", &radius);
        float diameter = PI * radius;
        printf("The area is: %.2f\n", diameter);
        break;
    case 2:
        printf("Enter Length: \n");
        scanf("%f", &length);
        len = length * length;
        printf("The area is: %.2f\n", len);
        break;
    case 3:
        printf("Enter Height & Width: \n");
        scanf("%f%f", &height, &width);
        len = height * width;
        printf("The area is: %.2f\n", len);
        break;
    case 4:
        printf("Enter Height & Width: \n");
        scanf("%f%f", &height, &width);
        len = 0.5 * height * width;
        printf("The area is: %.2f\n", len);
        break;
    default:
        printf("Invalid Choice, Try Again");
    }
}
