#include<stdio.h>

int main()
{
    int math,phy,chem;
    printf("Sample Non Negative Input:\n");
    scanf("%d%d%d", &math, &phy, &chem);
    if(math>=65 && phy>=55 && chem>=50)
    {
        if(math+phy+chem>=190 || phy+chem>=140)
        {
            printf("The candidate is eligible for admission.");
        }
        else
        {
            printf("The candidate is not eligible for admission.");
        }
    }
    else
        {
            printf("The candidate is not eligible for admission.");
        }


    return 0;
}


