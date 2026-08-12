//260811 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc cProgramming/19_arrayInput.c -o cProgramming/19_arrayInput.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc cProgramming/19_arrayInput.c -o cProgramming/19_arrayInput.exe -lm

How to run the exe:
./cProgramming/19_arrayInput.exe

https://youtu.be/xND0t1pr3KY?t=13200&si=wS-tBM3WnmHAtRwG
*/

#include <stdio.h>

int main() {

    int scores[5] = {0};

    for (int i = 0; i < 5; i++) {

        printf("Enter a score: ");
        scanf("%d", &scores[i]);

    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", scores[i]);
    }

    return 0;

}