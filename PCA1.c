/* PCA
#include <stdio.h>

int max(int arr[], int n, int len);
int min(int arr[], int n, int len);


int main()
{
    int arr[50], n;
    int i;

    printf("Enter size of the arr: ");
    scanf("%d", &n);
    printf("\nEnter %d elements in arr: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("Minimum element in arr = %d\n", min(arr, 0, n));
    printf("Maximum element in arr = %d\n", max(arr, 0, n));

    return 0;
}

int max(int arr[], int n, int len)
{
    int maxval;

    if(n >= len-2)
    {
        if(arr[n] > arr[n + 1])
            return arr[n];
        else
            return arr[n + 1];
    }

    maxval = max(arr, n + 1, len);
    if(arr[n] > maxval)
        return arr[n];
    else
        return maxval;
}


int min(int arr[], int n, int len)
{
    int minval;

    if(n >= len-2)
    {
        if(arr[n] < arr[n + 1])
            return arr[n];
        else
            return arr[n + 1];
    }

    minval = min(arr, n + 1, len);

    if(arr[n] < minval)
        return arr[n];
    else
        return minval;
}
*/

/* dec to bin recursion
#include <stdio.h>
int decToBinary(int num);

int main()
{
    int n;

    printf("Enter the value to convert to binary: ");
    scanf("%d", &n);
    printf(" The binary number:");
    decToBinary(n);
    printf("\n");

	return 0;
}

int decToBinary(int num)
{
    if (num == 0)
    {
        return 0;
    }

    decToBinary(num / 2);
    printf("%d", num % 2);
    return 0;
}
*/

// #include <stdio.h>

// int findSum(int arr[], int n)
// {
//     if (n <= 0)
//         return 0;
//     return (findSum(arr, n - 1) + arr[n - 1]);
// }
 

// int main()
// {
//     int arr[] = { 1, 2, 3, 4, 5 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Output: %d\n", findSum(arr, n));
//     return 0;
// }

// #include<stdio.h>
// int BC(int n, int k);

// int main()
// {
//         int n,k;
//         printf("Enter n and k : ");
//         scanf("%d%d",&n,&k);
//         printf("\nBinomial coefficient\n",BC(n,k));
//         printf("%d\n",BC(n,k));

//         return 0;
// }

// int BC(int n, int k)
// {
//         if(k==0 || k==n)
//                 return 1;
//         return BC(n-1,k-1) + BC(n-1,k);
// }


#include <stdio.h>
#include <stdlib.h>
struct node

{
    int info;
    struct node *left, *right;
};

struct node *createnode(int key)

{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    newnode->info = key;

    newnode->left = NULL;

    newnode->right = NULL;

    return(newnode);

}
static int count = 0;

int countnodes(struct node *root)

{

    if(root != NULL)
    {
        countnodes(root->left);

        count++;

        countnodes(root->right);

    }

    return count;

}

int main()

{

    struct node *newnode = createnode(25);

    newnode->left = createnode(27);

    newnode->right = createnode(19);

    newnode->left->left = createnode(17);

    newnode->left->right = createnode(91);

    newnode->right->left = createnode(13);

    newnode->right->right = createnode(55);


    printf("Number of nodes in tree 1 = %d \n",countnodes(newnode));

    count = 0;

    struct node *node = createnode(1);

    node->right = createnode(2);

    node->right->right = createnode(3);

    node->right->right->right = createnode(4);

    node->right->right->right->right = createnode(5);

    printf("Number of nodes in tree 2 = %d \n",countnodes(node));
    count = 0;
    struct node *root = createnode(15);
    printf("Number of nodes in tree 3 = %d\n",countnodes(root));

    return 0;

}