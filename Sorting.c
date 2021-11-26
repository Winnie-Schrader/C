#include<stdio.h>

int main()
{
    int a[50],j,i,n,val,pos;
    printf("Enter the range of array:\n");
    scanf("%d",&n);
    printf("Enter the value of array:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
     int tmp;
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 0; j <= n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                tmp= a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
}    


