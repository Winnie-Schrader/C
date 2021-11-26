/*Q1) Multiplication table of value n.

author: Mono

//Answer 1:

// #include<stdio.h>
// int main()
// {
//     int n,i;
//     // int val;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     printf("The table:\n");
//     for (i = 1; i <=10; i++)
//     {
//         // val=n*i;
//         printf("%d * %d =%d",n,i,n*i);
//         printf("\n");
//     }
// }
*/

/*Q2) Multiplication of 10 in reversed order


//Answer 2: 

#include<stdio.h>
int main()
{
    int n,i;
    // int val;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The table:\n");
    for (i = 10; i>=1; i--)
    {
        // val=n*i;
        printf("%d * %d =%d",n,i,n*i);
        printf("\n");
    }
}
*/

/*Q3) Addition of nos  frm 1 to 10(n)

#include <stdio.h>
int main()
{
    int n = 10, i, tmp = 0;

    // while (i<=n)
    // {
    //     tmp = tmp+i;
    //     printf("%d\n",tmp);
    //     i++;
    // }

    for (i = 0; i <= n; i++)
    {
        tmp = tmp + i;
        printf("%d\n", tmp);
    }
}
*/

/*Q4) Factorial of number n

#include <stdio.h>
int main()
{
    int tmp,n=4,i=1;
    tmp=n;
    // for ( i = 1; i < tmp; i++)
    // {
    //     n=n*i;
    // }
    // printf("%d\n",n);
    while (i<tmp)
    {
        n=n*i;
        i++;
    }

    printf("%d\n",n);
    
}
*/

/* Q5) Prime number or not.

#include <stdio.h>
int main()
{
    int n, i=1, tmp;
    printf("Enter a number:\n");
    scanf("%d", &n);
    // for (i = 2; i < n; i++)
    // {
    //     if (n % i == 0 && n!=2)
    //     {
    //         printf("Its nt a prime number\n");
    //         break;
    //     }
    //     else
    //         tmp = 1;
    // }

    // if (tmp==1)
    // {
    //     printf("Prime\n");
    // }
    while (i<n)
    {
        if(n%i==0 && n!=2)
        {
            printf("Not Prime\n");
            break;
        }
        else
        {
        tmp=1;
        }
        i++;
    }
    if (tmp==1)
    {
        printf("Prime\n");
    }
    
}
*/


// #include <stdio.h>
// int main()
// {
//     int n, i=0, tmp = 0;
//     printf("Enter the range: ");
//     scanf("%d",&n);
//     while (i<=n)
//     {
//         tmp = tmp+i;
//         i++;
//     }
//        printf("Sum = %d\n",tmp);

    // for (i = 0; i <= n; i++)
    // {
    //     tmp = tmp + i;
    //     printf("%d\n", tmp);
    // }
//}