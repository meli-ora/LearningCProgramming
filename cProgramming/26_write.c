/* 260812

gcc cProgramming/28_memoryAllocation.c -o cProgramming/28_memoryAllocation.exe -lm
./cProgramming/28_memoryAllocation.exe

https://youtu.be/xND0t1pr3KY?is=mX0CmUuUxwM5tjxV

*/

// THIS FILE IS A CLONE OF A LOCAL FILE, FOPEN DOES NOT WORK HERE

#include <stdio.h>

int main() {

    FILE *p_file = fopen(".\\26_write.txt", "w");

    char text[] = "yeah okay whatever\ntesting testing testing\none\ntwo\nthree";

    if (p_file == NULL) {
        printf("the file could not be opened");
        return 1;
    }

    fprintf(p_file, "%s", text);
    printf("the file was written successfully\n");

    fclose(p_file);

    return 0;

}