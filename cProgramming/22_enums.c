//260811 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc cProgramming/22_enums.c -o cProgramming/22_enums.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc cProgramming/22_enums.c -o cProgramming/22_enums.exe -lm

How to run the exe:
./cProgramming/22_enums.exe

https://youtu.be/xND0t1pr3KY?t=13200&si=wS-tBM3WnmHAtRwG
*/

// -- SETUP -- //

#include <stdio.h>

enum Day {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY // 0, 1, 2, 3, 4, 5, 6
};

typedef enum {
    SUNDAY2 = 0, MONDAY2 = 1, TUESDAY2 = 2, WEDNESDAY2 = 3, THURSDAY2 = 4, FRIDAY2 = 5, SATURDAY2 = 6
} Day2;

typedef enum {
    SUCCESS, FAILURE, PENDING
} Status;

// -- HEADER -- //

void connectStatus(Status status);

// -- FUNCTIONS -- //

void connectStatus(Status status) {
    
    switch(status) {
        case SUCCESS:
            printf("connection was successful lol\n");
            break;
        case FAILURE:
            printf("lol connection failed\n");
            break;
        case PENDING:
            printf("uhh I don't actually know if the connection will go through or not\n");
            break;
    }

}

// -- RUNTIME -- //

int main() {

    enum Day today = WEDNESDAY;
    Day2 tomorrow = THURSDAY2;

    printf("%d\n", today); // 3
    printf("%d\n", tomorrow); // 4

    if (today + 1 == THURSDAY2) {
        printf("yes\n");        
    } else {
        printf("no\n");
    }

    connectStatus(SUCCESS);
    connectStatus(PENDING);
    connectStatus(FAILURE);

    return 0;

}