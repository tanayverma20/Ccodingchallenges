/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
                            // STRONG NUMBER //
#include <stdio.h>
int fact(int digit);
int main()
{
    int n,temp,sum=0,r;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
    printf("for non negative number strong number cannot be find");
    else
    {
    
    
    temp=n;
    while(n!=0)
    {
      r=n%10;
      int var=fact(r);
      sum=sum+var;
      n=n/10;
    }
      if(sum==temp)
      printf("%d is a strong number",temp);
      else
      printf("%d is not a strong number",temp);
    }
    return 0;
}

int fact(int digit)
{
    int i,fact=1;
    for(i=1;i<=digit;i++)
    {
        fact=fact*i;
    }
    return fact;
}