//Pattern R13

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines of pattern to be printed: ");
    scanf("%d", &n);
    int i,j,s;
    for(i=0; i<n; i++)
    {
        s=65+n-1;
        for(j=0; j<(i+1); j++)
        {
            printf("%c ", s-i);
            s++;
        }
        printf("\n");
    }
    return 0;
}