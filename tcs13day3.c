//a program in c to count number of digits in an integer.  
//testcase1,2,3: input:23456              input:12         input:2432902008176640000  
//               output:5                 output:2         output:19
int printf(const char * format,...);
int scanf(const char * format,...);
void main()
{
long long n;
int c=0;	
printf("enter a number ");
scanf("%lld",&n);
while (n!=0)
{
n/=10;
c++;
}
printf("%d",c);
}