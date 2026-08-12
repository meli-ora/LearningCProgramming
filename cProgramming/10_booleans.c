//260810 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/10_booleans.c -o Lesson0/10_booleans.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/10_booleans.c -o Lesson0/10_booleans.exe -lm

How to run the exe:
./Lesson0/10_booleans.exe

https://www.youtube.com/watch?v=xND0t1pr3KY&t=5131s
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {

    bool isChud = true;

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if (strlen(name) == 0) {
        printf("invalid name lol\n");
        return 1;
    }

    if (isChud) {
        printf("YOU, %s, ARE A CHUD!!!\n", name);
    } else {
        printf("YOU, %s, ARE NOT A TOY!!!\n", name);
    }

    return 0;

}