//Pattern L6

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines of pattern to be printed: ");
    scanf("%d", &n);
    int i,j,s;
    for(i=0; i<n; i++)
    {
        for(s=0; s<i; s++)
        printf(" ");
        for(j=0; j<n-i; j++)
        printf("*");
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        for(s=0; s<n-1-i; s++)
        printf(" ");
        for(j=0; j<i+1; j++)
        printf("*");
        printf("\n");
    }
    return 0;
}