//a program in c to find the sum of the digits of a given number  
//testcase1,2,3: input:1236              input:12     
//               output:12                 output:3         
int printf(const char * format,...);
int scanf(const char * format,...);
void main()
{
long long n;
int c=0,sum,m;
printf("enter a number ");
scanf("%lld",&n);
while (n!=0)
{
m=n%10;	sum=sum+m;n/=10;	
	}
printf("%d",sum);
}
		
	OR

int printf(const char * format,...);
int scanf(const char * format,...);
void main()
{
long long n;
int c=0,sum,m;
printf("enter a number ");
scanf("%lld",&n);
while (n>0||sum>9)
{
if(n==0)
{
n= sum;
sum=0;
}
m=n%10;
sum=sum+m;
n/=10;	
}
printf("%d",sum);
}
OR

#include<stdio.h>
int main()
{ 
long long int sum = 0;
long long int n;
scanf("%lld",&n);
while(n > 0 || sum > 9) 
{ 
if(n == 0) 
{ 
n = sum; 
sum = 0; 
} 
sum += n % 10; 
n /= 10; 
} 
printf("%lld",sum);
return 0;
}

OR

#include<stdio.h>
int main()
{
long long int x;
scanf("%lld",&x);
if(x==0)
printf("%d",0);
else if(x%9==0)
printf("%d",9);
else
printf("Sum is: %lld",x%9);
printf("\n");
return 0;
}
