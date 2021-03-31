//a program in c to check whether the number is prime  
//testcase1,2,3: input:17              input:15           input:20
//               output:289            output:7.50        output:10

#include <stdio.h>
int main()
{
    int i, num, prime = 0;
        scanf("%d", &num);
           for(i=1; i<=num;i++)
                   {     
                           if(num%i==0)
                                        prime++;
                                            }
   if(prime==2)    
           printf("%d", (num*num));
   else if(num%2 ==0)     
            printf("%d", (num/2) );
   else
          printf("%0.2f", ((float)num/2)); 
   return 0;   
   }


OR


#include <stdio.h>
int main()
{
    int i, num, prime = 0;
        scanf("%d", &num);
           for(i=2; i<=num/2;i++)
                   {     
                           if(num%i==0)
                                        prime++;
                                            }
   if(prime==2)    
           printf("%d", (num*num));
   else if(num%2 ==0)     
            printf("%d", (num/2) );
   else
          printf("%0.2f", ((float)num/2)); 
   return 0;   
   }