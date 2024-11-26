//Pattern R9

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines of pattern to be printed: ");
    scanf("%d", &n);
    int i,j,s;
    for(i=0; i<n; i++)
    {
        for(s=0; s<n-i; s++)
        printf(" ");
        for(j=0; j<i+1; j++)
        printf("%d ", i+1);
        printf("\n");
    }
    return 0;
}