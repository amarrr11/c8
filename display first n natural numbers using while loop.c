/*Display first n natural numbers
using while loop*/
#include<stdio.h>
int main()
{
int i=1,num;
printf("Enter num= ");
scanf("%d",&num);
while(i<=num)
{
printf("%d ",i);
i++;
}
return 0;
}
