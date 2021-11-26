#include <stdio.h>

int Intersection_Array(int a[], int b[], int c[]);
int Union_Array(int a[], int b[], int c[]);

int main()
{
    int a[20], b[20], c[30], m, n, i;
    int list;
    printf("Press 1 for Intersection:\n");
    printf("\nPress 2 for Union:\n");
    scanf("%d", &list);
    switch (list)
    {
    case 1:
        Intersection_Array(a, b, c);
        break;

    case 2:
        Union_Array(a, b, c);
        break;

    default:
        printf("Wrong number\n");
        break;
    }
    return 0;
}

int Intersection_Array(int a[], int b[], int c[])
{
    int n, m, i;
    printf("Enter the range of 1st array:\n");
    scanf("%d", &n);
    printf("Enter the values of 1st array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the range of 2nd array:\n");
    scanf("%d", &m);
    printf("Enter the values of 2nd array:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int k = 0;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (b[j] == a[i])
            {
                c[k] = b[j];
                k++;
            }
        }
    }
    printf("\n A ∩ B:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d\t", c[i]);
    }
}

int Union_Array(int a[], int b[], int c[])
{
    int n,m,i,j,tmp,k,count=0;
    printf("Enter the range of 1st array:\n");
    scanf("%d", &n);
    printf("Enter the values of 1st array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        c[i]=a[i];
    }
    
    printf("Enter the range of 2nd array:\n");
    scanf("%d", &m);
    printf("Enter the values of 2nd array:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    tmp = m+n;
     for (i = 0; i < m; i++)
    {
        c[n+i]=b[i];
        
    }
    
    printf("\nA U B : ");

    for ( i = 0; i < tmp; i++)
    {
        k=0;
        for ( j = i+1; j < tmp; j++)
        {
            if (c[i]==c[j])
            {
                k=1;
                break;
            }                        
        }

         if (k==0)
             {
                c[count]=c[i];
                count++;
             }        
    }
    //Apply Sorting Function here;

           for (i = 0; i < count; i++)
    {
        printf("%d\t", c[i]);
    }

}