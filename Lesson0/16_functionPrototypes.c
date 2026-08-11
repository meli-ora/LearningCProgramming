//260810 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/16_functionPrototypes.c -o Lesson0/16_functionPrototypes.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/16_functionPrototypes.c -o Lesson0/16_functionPrototypes.exe -lm

How to run the exe:
./Lesson0/16_functionPrototypes.exe

https://youtu.be/xND0t1pr3KY?t=9709&si=u5aryPeC4GHrnrvl
*/

#include <stdio.h>
#include <stdbool.h>

int exponent(int base, int exp);

int exponent(int base, int exp) {
    
    int value = 0;
    value = value + base;

    for (int i=0; i<exp; i++) {
        value = value * base;
    }

    return value;

}

int main() {

    int base = 0;
    int exp = 0;

    printf("input a base: ");
    scanf(" %d", &base);

    printf("input an exponent value: ");
    scanf(" %d", &exp);

    printf("%d is the result of base %d, exp %d\n", exponent(base, exp), base, exp);

    return 0;

}