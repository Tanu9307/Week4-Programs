//Pattern R15

#include <stdio.h>
int main() {
    int n,i,s,j;
    printf("Give the value of n: ");
    scanf("%d", &n);
    for(i=0; i<n-1; i++)
    {
        for(s=0; s<i; s++)
        printf(" ");
        printf("*");
        for(j=0; j<(2*(n-i-1)-1); j++)
        printf("-");
        printf("*");
        printf("\n");
    }
    for(i=n-1; i<n; i++)
    {
        for(s=0; s<i; s++)
        printf(" ");
        printf("*");
    }
    return 0;
}