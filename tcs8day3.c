//a program in c to check whether the number is prime  
//testcase1,2: input:1600              input:2011           
//               output:Leap year            output:Not a leap year        
int printf(const char *format, ...);
int scanf(const char *format, ...);
#include<stdio.h>
int main()
{
int year;
scanf("%d"&year);
if((year%4==0 && year%100!=0) || (year%400==0))
      printf("Leap year");
else 
printf("Not a Leap year");
return 0;
}
