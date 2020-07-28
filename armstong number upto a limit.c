/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
                     
#include <stdio.h>

int main()
{
    int originaln,r,i,sum,limit;
    printf("Enter limit:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        originaln=i;
        sum=0;
      while(originaln!=0)
      {
        r=originaln%10;
        sum=sum+r*r*r;
        originaln=originaln/10;
      }
    if(sum==i)
    printf("%d ",i);
    
    }
    return 0;
}
