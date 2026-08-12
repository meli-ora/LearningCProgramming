//260811 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/18_randomNumbers.c -o Lesson0/18_randomNumbers.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/18_randomNumbers.c -o Lesson0/18_randomNumbers.exe -lm

How to run the exe:
./Lesson0/18_randomNumbers.exe

https://youtu.be/xND0t1pr3KY?t=13200&si=wS-tBM3WnmHAtRwG
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

double getNewRandomAlpha();

double getNewRandomAlpha() {

    srand(time(NULL));

    return (double)rand()/RAND_MAX;

}

int main() {

    char name1[30] = "";
    char name2[30] = "";

    int relationshipLevel = (int)ceil(getNewRandomAlpha() * 100);

    printf("please input cadidate 1: ");
    scanf(" %s", name1);

    printf("please input candidate 2: ");
    scanf(" %s", name2);
    
    printf("%s and %s have a relationship level of %d%%\n", name1, name2, relationshipLevel);

    return 0;

}