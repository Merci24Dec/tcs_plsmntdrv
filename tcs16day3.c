//a program in c to check whether the number is palindrome
//testcase1,2,3: input:234            input:121           
//               output:not a palindrome            output:Palindrome        
int printf(const char * format,...);
int scanf(const char * format,...);
void main()
{
long long n;
int c=0,sum,m,r,t;
printf("enter a number ");
scanf("%lld",&n);
t = n; 
while(n > 0)
{
r = n%10;
sum = (sum*10) + r;
n/=10;
}
if (sum==t)
{
printf("pallindrome");
}
else
{
printf("not pallindrome");
}
