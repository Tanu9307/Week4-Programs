//Pattern R7

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines of pattern to be printed: ");
    scanf("%d", &n);
    int i,j,s;
    for(i=0; i<n; i++)
    {
        for(s=0; s<n-i-1; s++)
        printf(" ");
        for(j=0; j<(2*i+1); j++)
        printf("*");
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        for(s=0; s<i+1; s++)
        printf(" ");
        for(j=0; j<(2*(n-i-1)-1); j++)
        printf("*");
        printf("\n");
    }
    return 0;
}