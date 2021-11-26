#include<stdio.h>
int Factorial(int n);

int main()
{
    int n,fact;
    printf("Enter any number:\n");
    scanf("%d",&n);
    fact=Factorial(n);
    printf("The fact is: %d\n",fact);    
    return 0;
}

int Factorial(int n)
{
    printf("(%d)\n",n);
     if (n==0 || n==1)     // Basic Condition to check if n becomes returns 1 else the function keeps rescursing
     {
        return 1;
     }
     else
     {
        return n*Factorial(n-1);
     } 
    
}
