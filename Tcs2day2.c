//a program in c to check whether the number is even or odd without using modulous operator
//testcase1,2: input:6              input:99           
//               output:even        output:odd  

#include<stdio.h>
int main()
{
  int num;
    scanf("%d", &num);
      int half = num/2;
  if( num == half*2 )
      printf("Even");
        else
            printf("Odd");
  return 0;
  }


OR
#include<stdio.h>
int main()
{
  int num=9;
  float res= num/2.0;
  printf("%.2f",res);
  return 0;
}