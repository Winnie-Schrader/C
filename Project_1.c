#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int randnum,i,val;
    srand(time(0));//Use to generate any number after every execution of the code
    randnum=rand()%10+1;
   //rand() is use to generate a number from 0 to infinite, if we mod it with 10(n) then it will generate any number between 0 to 10
    printf("%d\n",randnum);
    for ( i = 1; i > 0; i++)
    {
        printf("\nGuess the number between 1 and 10:\n");
        scanf("%d",&val);
        if (val > randnum)
        {
            printf("\nThe number is greater than the random number\n");
        }
        if (val < randnum)
        {
            printf("\nThe number is smaller than the random number\n");
        }
        if (val == randnum)
        {
            printf("\n You have guessed it right!\n"); 
            break;
        }
    }

    printf("\nNumber of tries: %d\n",i);
   

    
}