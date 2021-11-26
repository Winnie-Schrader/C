#include<stdio.h>
int main()
{
    int a[30],n,i,j,k,tmp,p = 0;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    printf("\nEnter the values of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }


for ( i = 1; i <= n-1; i++)
{
    tmp = a[i];
    j=i-1;
    while (j>= 0 && tmp < a[j])
    {
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = tmp;    
    
    printf("Pass %d: ",p);
    for ( k = 0; k < n; k++)
    {
        printf("%d\t",a[k]);
    }
    printf("\n");
    p++;
}

return 0;
}
