//260810 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/12_switches.c -o Lesson0/12_switches.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/12_switches.c -o Lesson0/12_switches.exe -lm

How to run the exe:
./Lesson0/12_switches.exe

https://www.youtube.com/watch?v=xND0t1pr3KY&t=5131s

note that switch cases is this,
but is different than switch expression which is more like

switch { input1 => output1; input2 => output2 }
*/

#include <stdio.h>

int main() {

    int choice = 0;

    printf("Enter the day in the week (1-7): ");
    scanf(" %d", &choice);

    switch (choice) {
        case 1:
            printf("it sunday bro\n");
            break;
        case 2:
            printf("it monday bro ughhh\n");
            break;
        case 3:
            printf("it tuesday my second least favorite day in the week\n");
            break;
        case 4:
            printf("it wednesday the most work day in the week\n");
            break;
        case 5:
            printf("it thursday my favorite day in the week\n");
            break;
        case 6:
            printf("it friday the TGIF day is real really\n");
            break;
        case 7:
            printf("it saturday the day to chill with the chuds\n");
            break;
        default:
            printf("this is not a day that exists in the week bro\n");
            break;
    }

    return 0;

}