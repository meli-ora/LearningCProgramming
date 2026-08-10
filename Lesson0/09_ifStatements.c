//260809 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/09_ifStatements.c -o Lesson0/09_ifStatements.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/09_ifStatements.c -o Lesson0/09_ifStatements.exe -lm

How to run the exe:
./Lesson0/09_ifStatements.exe

https://www.youtube.com/watch?v=xND0t1pr3KY&t=5131s
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int age = 0;

    printf("enter your age: ");
    scanf(" %d", &age);

    if (age >= 18) {
        printf("you are a chud\n");
    } else if (age == 0) {
        printf("chud is still in the womb lol\n");
    } else if (age < 0) {
        printf("chud had not even been conceived yet lol\n");
    } else {
        printf("you are still a chud\n");
    }

    printf("being a chud is inevitable\n");

    return 0;

}