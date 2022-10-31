#include <stdio.h>
int main()
{
    int n, k, count = 0, score[100], pos;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }
    pos = score[k - 1];
    for (int j = 0; j < n; j++)
    {
        if (0 < score[j])
        {
            if (pos <= score[j] && 0 < pos)
            {
                count++;
            }
            else if(pos <= score[j])
            {
                count++;
            }
        }
    }
    printf("%d", count);
}