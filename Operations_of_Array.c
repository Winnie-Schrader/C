#include <stdio.h>
int Insertion_Array(int a[]);
int Deletion_Array(int a[]);
int Searching_Array(int a[]);
int Update_Array(int a[]);
int main()
{
    int a[30];
    int list;
    printf("Press 1 for Insertion\n");
    printf("\nPress 2 for Deletion\n");
    printf("\nPress 3 for Searching\n");
    printf("\nPress 4 for Updating\n");
    scanf("%d", &list);
    switch (list)
    {
    case 1:
        Insertion_Array(a);
        break;

    case 2:
         Deletion_Array(a);
        break;
        
    case 3:
         Searching_Array(a);
        break;
    case 4:
         Update_Array(a);
        break;
        

    default:
        printf("Wrong number\n");
        break;
    }
    return 0;
}

int Insertion_Array(int a[])
{
    int n,i,val,pos;
    printf("Enter the range of the array:\n");
    scanf("%d", &n);
    printf("Enter the values of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     printf("Enter the postion: \n");
    scanf("%d", &pos);
    printf("Enter the value you want to insert:\n");
    scanf("%d",&val);
    for ( i = n-1; i >= pos-1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=val;
    n=n+1;
    printf("Updated array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

}

int Deletion_Array(int a[])
{
    int n,i,val,pos;
    printf("Enter the range of the array:\n");
    scanf("%d", &n);
    printf("Enter the values of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     printf("Enter the value you want to delete:\n");
    scanf("%d", &val);
    for ( i = 0; i < n; i++)
    {
        if (val==a[i])
        {       
            pos=i;
            break;
        }        
    }

    for ( i = pos+1; i < n; i++)
    {
        a[i-1]=a[i];
    }
    n=n-1;
    printf("Updated array:\n");  
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }  
}
int Searching_Array(int a[])
{
    int n,i,pos,val;
	printf("\n Enter the range: ");
	scanf("%d",&n);
	printf("\nEnter the numbers: ");
	
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\nEnter the number u want to search: ");
		scanf("%d",&val);
		for(i=0;i<n;i++)
		{
			if(a[i]==val)
			{
				pos=i;
				break;
				
			}
		}
		if(i<n)
        printf("\nElement %d found at index  %d\n",val,pos);
        else
        printf("Element not found\n");
}        

int Update_Array(int a[])
{
    int n,i,val,pos;
    printf("Enter the range of the array:\n");
    scanf("%d", &n);
    printf("Enter the values of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     printf("Enter the postion: \n");
    scanf("%d", &pos);
    printf("Enter the value you want to update:\n");
    scanf("%d",&val);
    a[pos-1]=val;
    printf("Updated array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }  
}    