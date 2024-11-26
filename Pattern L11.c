//Pattern L11

#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of lines of pattern to be printed: ");
    scanf("%d", &n);
    printf("Enter the starting integer: ");
    scanf("%d", &m);
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<(i+1); j++)
        {
            printf("%d ", i+m);
        }
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<(n-i); j++)
        {
            printf("%d ", n+m-1-i);
        }
        printf("\n");
    }
    return 0;
}