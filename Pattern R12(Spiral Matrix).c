//R12(Spiral Matrix)
#include <stdio.h>

int main() {
    int i,j,k,l,m,n,s=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n][n];
    for(i=0; i<n/2+1; i++)
    {
        for(j=i;j<n-i; j++)
        a[i][j]=s++;
        for(k=i+1; k<n-i-1; k++)
        a[k][n-i-1]=s++;
        for(l=n-i-1; l>=i; l--)
        a[n-i-1][l]=s++;
        for(m=n-i-2; m>i; m--)
        a[m][i]=s++;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}