//a program in c to find sum of all the prime numbers within a range.  
//testcase1,2: input:5 13              input:7 24          
//               output:18            output:83 
int printf(const char * format,...);
int scanf(const char * format,...);
#include<math.h>
int main() 
{
int n1,n2,i,j,c,s=0;
scanf("%d%d",&n1,&n2);
for(i=n1+1;i<n2;i++)
{
for(j=2;j<=sqrt(i);j++)
{
c=0;
if(i%j==0)
{
c++;
break;
}
}
if(c==0)
s=s+i;
}
printf("%d",sum);
return 0;
}


