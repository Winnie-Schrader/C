/* 1 Program to print the address of a variable and use the address to get the value.

#include <stdio.h>
int main()
{
    int i = 32, *j=&i;
    printf("The address of the variable is: %u\n",&i);
    printf("The value of this variable is: %d\n",*j);
   return 0; 
}
*/

/* 2 Program to print the address of a variable. Pass this variable to a function and print its address.
#include <stdio.h> 
void pass_func(int a);
int main()
{
    int i;
    printf("Addr of i before function: %u\n", &i);
     pass_func(i);
    return 0;

}

void pass_func(int a)
{
        printf("Addr of i after function: %u\n", &a);
}
*/

/* 3 Program to change the value of a variable 10 times of its current value using a function and pass the value by reference.

#include <stdio.h> 
int change_val(int *a);
int main()
{
    int i=2;
    printf("val before change: %d\n",i);
    i = change_val(&i);
    printf("val after change: %d\n",i);
return 0;
}

int change_val(int *a)
{
    int c;
    c = *a * 10;
    return c;
}
*/

/* 4 Program to calculate sum and avg of 2 numbers using a function. Use pointers to print the values of Sum and average in main

#include <stdio.h> 
int sum_avg(int a , int b , int *sum, int *avg);
int main()
{
   int x,y,res1,res2;
   printf("Enter any 2 vals:\n");
   scanf("%d%d",&x,&y);
   sum_avg(x,y,&res1,&res2);
   printf("Sum: %d\t Avg:%d\n",res1,res2);
}

int sum_avg(int a , int b , int *sum, int *avg)
{
    *sum = a+b;
    *avg = *sum/2;
}
*/

/* 5 Program to print the value of a variable using pointer to pointer type of variable

#include <stdio.h>
int main()
{
    int i=8,*j,**k;
    j=&i;
    k=&j;
    printf("Value of i is:%d\n", **k);
    printf("Value of j is :%u\n", *k);
}
*/

/* 6 Using Problem number 3 to show that Call by Value just copies the value from the main function and doesnt change the value of it(the value in the main funciton unless the returned val is assigned to it).

#include <stdio.h> 
int change_val(int a);
int main()
{
    int i=2;
    printf("val before change: %d\n",i);
    //i =change_val(i); using this will change the val of i as the returned val will be assigned to variable i.
     change_val(i);
    printf("val after change: %d\n",i);
return 0;
}

int change_val(int a)
{
    int c;
    c = a * 10;
    return c;
}
*/

/* Addition of a number to a pointer

#include <stdio.h>
int main()
{
    int x[5],i;
    int *y =&x[0];
    printf("Enter 5 values:\t ");
    for ( i = 0; i < 5; i++)
    {
       // scanf("%d",&x[i]);
        scanf("%d",y);
        y++;
    }
    //
    printf("The val of x before increment:%u\n", *y);
    y++;
    printf("The val of x after increment:%u\n", *y);
}
*/

/* Substraction of a number to a pointer

#include <stdio.h>
int main()
{
    int x[5],i;
    int *y =&x[1];
    printf("Enter 5 values:\t ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&x[i]);
    }
    printf("The val of x before increment:%d\n", *y);
    y--;
    printf("The val of x after increment:%d\n", *y);
    return 0;
}
*/

/* Substraction of one pointer from another 
#include <stdio.h>
int main()
{
    int x[5],i;
    int *y =&x[1];
    int **z = &y;
    printf("Enter 5 values:\t ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&x[i]);
    }
    printf("The val of x before increment:%d\n", **z);
    y--;
    printf("The val of x after increment:%d\n", **z);
    return 0;
}       
*/

/* Pointers with array
#include <stdio.h>
int main()
{
    int x[5],i;
    int *y =&x[0];
    printf("Enter 5 values:\t");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",y);
        y++;
    }
    printf("The vals are:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",x[i]);
   }    
}    
*/

/* Passing Arrays to function using Pointer.  
#include<stdio.h>
void printArray(int *ptr,int n);
int main()
{
    int arr[5] = {7,9,8,2,1};
    printArray(&arr[0],5);
    return 0;
}

void printArray(int *ptr,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
}
*/