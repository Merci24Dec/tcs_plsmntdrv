//a program in c to check vowel or consonant  
//testcase1,2,3: input:A                 input:a            input:R
//               output:Vowel            output:Vowel       output:consonant 
#include<stdio.h>
int main()
{
char c;
int Low,Upp;
scanf("%c"&c);
Low=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
Upp=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(Low || Upp)
    print("Vowel");
else
    print("Consonant");
return 0;
}