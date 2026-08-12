//260810 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/13_incrementalInput.c -o Lesson0/13_incrementalInput.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/13_incrementalInput.c -o Lesson0/13_incrementalInput.exe -lm

How to run the exe:
./Lesson0/13_incrementalInput.exe

https://youtu.be/xND0t1pr3KY?t=8795&si=3d7UaXWXllbSNMry
*/

#include <stdio.h>
#include <string.h>

int main() {

    char runningText[100] = "test";
    int isRunning = 1;
    char temp[10] = "";

    while (isRunning == 1) {

        printf("%s\n", runningText);

        printf("input text (Ctrl+C to exit): ");
        fgets(temp, sizeof(temp), stdin);
        temp[strlen(temp) - 1] = '\0';

        if (strlen(temp) == 0) {
            runningText[strlen(runningText) - 1] = '\0';
        } else {
            runningText[strlen(runningText)] = temp[0];
        }

    }

    return 0;

}