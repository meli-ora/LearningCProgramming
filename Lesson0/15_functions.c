//260810 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/15_functions.c -o Lesson0/15_functions.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/15_functions.c -o Lesson0/15_functions.exe -lm

How to run the exe:
./Lesson0/15_functions.exe

https://youtu.be/xND0t1pr3KY?t=9709&si=u5aryPeC4GHrnrvl
*/

#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age) {

    printf("happy bday to u lol\n");
    printf("happy bday to u looooool\n");
    printf("happy bday to u loooooooooooool\n");
    printf("happy bday to u, %s is now %d lol\n", name, age);

}

void happyBirthdayIncrement(char name[], int age) {

    for (int i = 0; i < age; i++) {
        happyBirthday(name, i);
    }

}

int main() {

    int age = 0;
    char name[30] = "";

    printf("Please input your name: ");
    fgets(name, sizeof(name), stdin);
    name[sizeof(name) - 1] = '\0';

    printf("Please input your new age: ");
    scanf(" %d", &age);

    happyBirthdayIncrement(name, age);
    happyBirthday(name, age);

    return 0;

}