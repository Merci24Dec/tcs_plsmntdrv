//a program in c to find LCM of two nos using GCD  
//testcase1,2,3: input:5 7              input:5 15        
//               output:35            output:15       
int printf(const char * format,...);
int scanf(const char * format,...);
int main() 
{
    long long int n1, n2, i, gcd, lcm;
        printf("Enter two positive integers: ");
            scanf("%lld %lld", &n1, &n2);
                for (i = 1; i <= n1 && i <= n2; ++i) 
                    {
                            if (n1 % i == 0 && n2 % i == 0)
                                        gcd = i;
                                            }
                                                lcm = (n1 * n2) / gcd;
                                                    printf("The LCM is: %lld.", lcm);
                                                        return 0;
                                                        }









