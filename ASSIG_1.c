/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

We'll say a number is special if it is a multiple of 11 or if it is one more than 
a multiple of 11. Print “SPECIAL” if the given non-negative number is special. Use the % "mod" operator.

*******************************************************************************/

#include <stdio.h>
int check_special(int);
int main(){
    int number,x;
    printf("Enter the number\n");
    scanf("%d",&number);
    
    x = check_special(number);
    if(x == 1)
    printf("SPECIAL");
    else
    printf("NOT SPECIAL");
    return 0;
}
int check_special(int num)
{
    if(num%11 == 0)
    return 1;
    return -1;
}

