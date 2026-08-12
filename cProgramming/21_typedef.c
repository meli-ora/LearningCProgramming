//260811 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc cProgramming/21_typedef.c -o cProgramming/21_typedef.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc cProgramming/21_typedef.c -o cProgramming/21_typedef.exe -lm

How to run the exe:
./cProgramming/21_typedef.exe

https://youtu.be/xND0t1pr3KY?t=13200&si=wS-tBM3WnmHAtRwG
*/

#include <stdio.h>

typedef char String[50];
typedef int Vector3[3];

int main() {

    char name[] = "melioraborealis";
    String name2 = "supercalifragilisticexpialidocious";

    printf("%s\n", name);
    printf("%s\n", name2);

    Vector3 newVector = {4, 6, 8};
    printf("%d, %d, %d\n", newVector[0], newVector[1], newVector[2]);

    return 0;

}