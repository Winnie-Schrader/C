// #include<stdio.h>
// void func1();
// void fun2();
// void func3();
// int main()
// {
//    //Indirect fucntion call;
//    func1();
//    return 0;
// }
// void func1()
// {
//     printf("\nMorning\n");
//      fun2();
//      func3();
// }
// void fun2()
// {
//     printf("\nAfternoon\n");
// }
// void func3()
// {
//     printf("\nNien\n");
// }

#include<stdio.h>

int main()
{
    int a=0,b,r,i,count,tmp;
    b=a+1;
    printf("Enter the the range of Fibonacci:\n");
    scanf("%d",&count);
    printf("The value is: ");
    for ( i = 0; i < count; i++)
    {
         r = a+b;
         printf("\t%d",r);
         tmp = b;
         b=r;
         a=tmp;
    }
    
}