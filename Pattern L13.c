//Pattern L13

#include <stdio.h>
int main()
{
    int n,s;
    printf("Enter the number of lines the pattern should be printed of: ");
    scanf("%d", &n);
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<(i+1); j++)
        {
        printf("%c ", j+65);
        }
        printf("\n");
    }
    return 0;
}