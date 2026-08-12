//260809 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/07_mathFunctions.c -o Lesson0/07_mathFunctions.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/08_circleCalculator.c -o Lesson0/08_circleCalculator.exe -lm

How to run the exe:
./Lesson0/08_circleCalculator.exe

*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int x = 9;

    x = sqrt(x);
    printf("%d\n", x);

    x = pow(x, 3);
    printf("%d\n", x);

    float pi = 3.14159;
    int roundPi = (int)ceil(pi);

    printf("%d\n", roundPi);

    printf("Hi, this should work if I run it!\n");

    return 0;

}