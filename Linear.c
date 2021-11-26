#include<stdio.h>
int main()
{
	int a[50],n,i,p,r,s;
	printf("\n Enter the range: ");
	scanf("%d",&n);
	printf("\nEnter the numbers: ");
	
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\nEnter the number u want to search: ");
		scanf("%d",&r);
		for(i=0;i<n;i++)
		{
			if(a[i]==r)
			{
				p=i;
				break;
			}
		}
		if(i<n)
        printf("\nElement %d found at index %d\n", r,p);
    else
        printf("Element not found");
	return 0;
}
