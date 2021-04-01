//a program in c to find out factorial of a number
//testcase1,2: input:5              input:20           
//               output:120           output:2432902008176640000        
int printf(const char *format, ...);
int scanf(const char *format, ...);
int main()
{
int num,i;
long long int fact=1;
scanf("%lld",&num);
for(i=1;i<=num;i++)
   fact = fact*i;
printf("%lld",fact);
return 0;
}

