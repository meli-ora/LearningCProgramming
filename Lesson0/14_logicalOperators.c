//260810 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/14_logicalOperators.c -o Lesson0/14_logicalOperators.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/14_logicalOperators.c -o Lesson0/14_logicalOperators.exe -lm

How to run the exe:
./Lesson0/14_logicalOperators.exe

https://youtu.be/xND0t1pr3KY?t=8795&si=3d7UaXWXllbSNMry

Logical Operators

boolean
! NOT
&& AND
|| OR

comparison
>=
<=
==

*/

#include <stdbool.h>
#include <stdio.h>

int main() {

    bool test = false;

    if (test) {
        printf("hello\n");
    } else {
        printf("goodbye\n");
    }

    return 0;

}