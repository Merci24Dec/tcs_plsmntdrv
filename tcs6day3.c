//a program in c to check alphabet or not 
//testcase1,2,3: input:A              input:a           input:?
//               output:ALPHABET      output:ALPHABET   output: NOT AN ALPHABET

#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c ALPHABET", c);
    else
        printf("%c NOT AN ALPHABET.", c);

    return 0;
}