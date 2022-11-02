#include <stdio.h>
int main()
{
    int i, j, N, arr[100], a[100], count = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &N);
    }
    for (i = 0; i < N; i++)
    {
        for(j=0;j<N;j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            } 
            
        }
        if (count==1)
        {
            a[i] = arr[i];
            count = 0;
        }
        
    }
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}