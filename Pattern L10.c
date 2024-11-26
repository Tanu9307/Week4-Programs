//Pattern L10

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines of pattern to be printed: ");
    scanf("%d", &n);
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<(n-i); j++)
        {
            printf("%d ", j+1);
        }
        printf("\n");
    }
    return 0;
}