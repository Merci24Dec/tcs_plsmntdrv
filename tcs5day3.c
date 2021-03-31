//a program in c to find the area of a circle 
//testcase1,2: input:10              input:2          
//               output:78.50            output:3.14        
int printf(const char *format, ...);
int scanf(const char *format, ...);
                #define PI 3.14
                int main()
                {
                    int d;
                        scanf("%d",&d);
                            float r= d/2.0;
                                float a= PI*r*r;
                                    printf("%.2f",a);
                                        return 0;
                                        }