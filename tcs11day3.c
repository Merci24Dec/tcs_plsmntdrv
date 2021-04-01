//a program in c to find the power of a number without using pow(). 
//testcase1,2: input:2 3              input:3 4          
//               output:8              output:81

#include<stdio.h>
int main()
{
int base,exponent;
long long result =1;
scanf("%d%d",&base,&exponent);
while(exponent !=0)
{
result *=base;
--exponent;
}
printf("%lld",result);
return 0;
}


       