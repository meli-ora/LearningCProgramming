//260811 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc cProgramming/23_structs.c -o cProgramming/23_structs.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc cProgramming/23_structs.c -o cProgramming/23_structs.exe -lm

How to run the exe:
./cProgramming/23_structs.exe

https://youtu.be/xND0t1pr3KY?t=13200&si=wS-tBM3WnmHAtRwG
*/

#include <stdio.h>
#include <stdbool.h>

struct Student {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
};

typedef struct { // just showing that you can typedef structs as well to achieve the same effect
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student2;

void printStudentData(struct Student thisStudent);

void printStudentData(struct Student thisStudent) {

    char* isTheStudentFullTimeOrNot = (thisStudent.isFullTime) ? "" : "not "; // this is a ternary, (condition) ? valuetosetiftrue : valuetosetiffalse

    printf("%s is %d years old, has a gpa of %.1f, and is %sfull time\n", thisStudent.name, thisStudent.age, thisStudent.gpa, isTheStudentFullTimeOrNot);

}

int main() {

    struct Student george = {"george", 12, 2.5, true};
    struct Student mary = {"mary", 16, 3.2, false};
    struct Student obligatory = {"spongebob", 25, 0.0, false};
    struct Student lelouch = {0}; // zeroes out all fields

    printStudentData(george);
    printStudentData(mary);
    printStudentData(obligatory);
    printStudentData(lelouch);

    return 0;

}