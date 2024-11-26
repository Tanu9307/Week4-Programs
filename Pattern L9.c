//Pattern L9

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines of pattern to be printed: ");
    scanf("%d", &n);
    int i,j,s;
    s=1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<(i+1); j++)
        {
            printf("%d ", s);
            s++;
        }
        printf("\n");
    }
    return 0;
}