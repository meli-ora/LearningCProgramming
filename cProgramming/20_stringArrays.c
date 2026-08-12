//260811 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc cProgramming/20_stringArrays.c -o cProgramming/20_stringArrays.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc cProgramming/20_stringArrays.c -o cProgramming/20_stringArrays.exe -lm

How to run the exe:
./cProgramming/20_stringArrays.exe

https://youtu.be/xND0t1pr3KY?t=13200&si=wS-tBM3WnmHAtRwG
*/

#include <stdio.h>

int main() {

    char fruit[][10] = {"Apple", "Banana", "Orange", "Coconut", "Lemon", "Pineapple"};
    int size = sizeof(fruit) / sizeof(fruit[0]);

    for (int i = 0; i < size; i++) {
        printf("%s\n", fruit[i]);
    }

    char names[3][30] = {0};

    for (int i = 0; i < 3; i++) {

        printf("Enter name %d: ", i+1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][sizeof(names[i]) - 1] = '\0';
        
    }

    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);

    return 0;

}