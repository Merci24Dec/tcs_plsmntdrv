//a program in c to print the factors of a positive integer  
//testcase1,2,3: input:15              input:12           
//               output:1 3 5 15       output:1 2 3 4 6 12        
#include <stdio.h> 
int main()
 { 
 int num, i; 
 printf("Enter a positive integer: "); scanf("%d", &num);
  printf("Factors of %d are: ", num);
   for (i = 1; i <= num; ++i) 
   {
    if (num % i == 0)
     {
      printf("%d ", i); 
      } 
      } 
      return 0; 
      }