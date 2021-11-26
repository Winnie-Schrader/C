#include<stdio.h>
int Bubble_Sort(int a[],int n);
int main()
{
    int a[50],n,f,r,i,m,val,pos=-1;
    printf("Enter the range of array:\n");
    scanf("%d",&n);
    f = 0;
    r = n-1;
    printf("Enter the value of array:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sorted:\t");
     Bubble_Sort(a,n);
    printf("Enter the value u want to search:\n");
    scanf("%d",&val);
    for ( i = 0; i < n; i++)
    {
        m=(f+r)/2;
        if (val==a[m])
        {
            pos=m;
            printf("Value found at index: %d\n", pos);
            break;
        }
        else if (val > a[m])
        {
            f=m+1;
        }
        else
            r=m-1;        
        
    }

    if (pos==-1)
    {
       printf(" Not Found:");
    }
    return 0;
}

int Bubble_Sort(int a[],int n)
{
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
        printf("%d\t ",a[i]);
    }
    printf("\n");
}

