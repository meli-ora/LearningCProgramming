//260810 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/17_loopsQuick.c -o Lesson0/17_loopsQuick.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/17_loopsQuick.c -o Lesson0/17_loopsQuick.exe -lm

How to run the exe:
./Lesson0/17_loopsQuick.exe

https://youtu.be/xND0t1pr3KY?t=9709&si=u5aryPeC4GHrnrvl
*/

// 'break' keyword breaks out of a loop, aka stopping the loop
// 'continue' keyword skips the current iteration of a loop, aka skipping the current cycle of a loop

#include <stdio.h>

int main() {

    // iteration pyramid

    int inputNum = 0;
    printf("how big yo pyramid: ");
    scanf(" %d", &inputNum);

    for (int i = 0; i < inputNum; i++) {

        int j = 0;

        while (j < i) {

            printf("j: %d, ", j);

            j++;
        }

        printf("i: %d\n", i);
        
    }

    // char cube

    int length = 0;
    int width = 0;
    char cubeChar = '#';

    printf("how long yo cube: ");
    scanf(" %d", &length);

    printf("how wide yo cube: ");
    scanf(" %d", &width);

    printf("what char to use for cube: ");
    scanf(" %c", &cubeChar);

    for (int i = 0; i < length; i++) {

        for (int j = 0; j < width; j++) {
            printf("%c", cubeChar);
        }

        printf("\n");

    }

    return 0;

}