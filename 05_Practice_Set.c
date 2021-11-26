/* Average using function
#include<stdio.h>
float Average(float a,float b, float c);

int main()
{
    float a,b,c,avg;
    printf("Enter any number:\n");
    scanf("%f%f%f",&a,&b,&c);
    avg= Average(a,b,c);
    printf("\n%f\n",avg);
    return 0;
}

float Average(float a, float b, float c)
{
    float result;
    result = (a+b+c)/3;
    return result;
}
*/

/*Fibonacci Series
#include<stdio.h>

int main()
{
    int a=0,b,r,i,count,tmp;
    b=a+1;
    printf("Enter the the range of Fibonacci:\n");
    scanf("%d",&count);
    for ( i = 0; i < count; i++)
    {
         r = a+b;
         printf("%d\t",r);
         tmp = b;
         b=r;
         a=tmp;
    }
    
}
*/

/* Sum of n numbers using Recursion: 

#include<stdio.h>
int Add(int n);

int main()
{
    int n,total;
    printf("Enter any number:\n");
    scanf("%d",&n);
    total=Add(n);
    printf("The sum is: %d\n",total);  
    return 0;
}

int Add(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    return n+Add(n-1);    
}
*/
