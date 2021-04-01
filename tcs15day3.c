//a program in c to find the reverse of an integer   
//testcase1,2: input:234              input:12           
//               output:432            output:21     
#include <stdio.h>
int main() 
{
    int rev =0, rem, n;
        scanf("%d", &n);
            while(n != 0)
                {
                       rem = n%10;
                              rev = rev *10 + rem;
                                     n /= 10;
                                         }
                                             printf("%d", rev);
                                                 return 0;
                                                 }  