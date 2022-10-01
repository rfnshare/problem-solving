#include <stdio.h>
void main()
{
    int a;
    scanf("%d", &a);
    for(int i=1; i<a+1; i++)
    {
        if(a%i==0)
        {
            if (i!= 1)
            {
                if (i!=a)
                {
                    printf("Composite Number\n");
                    break;
                }
                else
                {
                    printf("Prime Number\n");
                }
            }
            else
            {
                if(i==a)
                {
                    printf("Neither\n");
                }
                else if(i == 1)
                {
                    continue;
                }
            }
        }
    }

}

