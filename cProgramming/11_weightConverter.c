//260810 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/11_weightConverter.c -o Lesson0/11_weightConverter.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/11_weightConverter.c -o Lesson0/11_weightConverter.exe -lm

How to run the exe:
./Lesson0/11_weightConverter.exe

https://www.youtube.com/watch?v=xND0t1pr3KY&t=5131s
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int choice = 0;
    double numInput = 0.0;

    printf("weight conversion calculator\n");
    printf("1. kilograms to pounds\n");
    printf("2. pounds to kilograms\n");
    printf("enter your choice (1 or 2): ");

    scanf(" %d", &choice);

    if (choice == 1) {

        printf("enter weight in kilograms: ");
        scanf(" %lf", &numInput);
        printf("converted to pounds: %lf\n", numInput * 2.205);

    } else if (choice == 2) {

        printf("enter weight in pounds: ");
        scanf(" %lf", &numInput);
        printf("converted to kilograms: %lf\n", numInput * 0.4536);

    } else {
        printf("this choice does not exist\n");
        return 1;
    }

    return 0;

}