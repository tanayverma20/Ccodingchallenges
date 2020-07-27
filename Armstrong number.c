/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
                              // ARMSTRONG NUMBER  //
#include <stdio.h>
int cube(int digit);
int main()
{
    int n,temp,rem,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+cube(rem);
        n=n/10;
    }
    
    if(temp==sum)
     printf("Armstromg number");
     else
     printf("Not an armstrong number");
    
    
     // int temp = cube(n);
     // printf("%d ",temp);
    
    return 0;
}

int cube(int digit)
{
    return digit*digit*digit;
}
