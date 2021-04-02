//a program in c to find gcd of two numbers   
//testcase1,2,3: input:2 7              input:5 15          
//               output:1               output:5        
#include<stdio.h>
int main()
{
int a,b,small,i;
scanf("%d%d",&a,&b);
small=a>b?b:a;
for(i=small;i>=1;i--)
{
if((a%i==0)&&(b%i==0))
{
printf("%d",i);
break;
}
}
return 0;
}
