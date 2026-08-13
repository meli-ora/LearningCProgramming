/* 260812

gcc cProgramming/28_memoryAllocation.c -o cProgramming/28_memoryAllocation.exe -lm
./cProgramming/28_memoryAllocation.exe

https://youtu.be/xND0t1pr3KY?is=mX0CmUuUxwM5tjxV

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // malloc() = a function that dynamically allocates a specified number of bytes in memory
    
    int amountOfGrades = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &amountOfGrades);

    char *grades = malloc(amountOfGrades * sizeof(char)); // reserve amountOfGrades * sizeof(char) amount of bytes temporarily

    if (grades == NULL) { // 'segmentation fault' program attempts to access memory its not allowed to access, VERY BAD because it can overwrite your OS
        printf("memory allocation failed, preventing segmentation fault by doing this\n"); 
        return 1;
    }

    for (int i = 0; i < amountOfGrades; i++) {
        printf("enter grade #%d: ", i+1);
        scanf(" %c", &grades[i]);
    }

    for (int i = 0; i < amountOfGrades; i++) {
        printf("%c ", grades[i]);
    }

    free(grades); // and we have to return the data associated with it afterwards
    grades = NULL; // prevents 'dangling pointer' where it refers to a memory location that is no longer valid

    return 0;

}