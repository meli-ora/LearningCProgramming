/* 260812

gcc cProgramming/28_memoryAllocation.c -o cProgramming/28_memoryAllocation.exe -lm
./cProgramming/28_memoryAllocation.exe

https://youtu.be/xND0t1pr3KY?is=mX0CmUuUxwM5tjxV

*/

// THIS FILE IS A CLONE OF A LOCAL FILE, FOPEN DOES NOT WORK HERE

#include <stdio.h>

int main() {

    FILE *p_file = fopen("C:\\Users\\lcarval2\\Documents\\code for learning\\cProgrmamingTemp\\27_read.txt", "r");
    char buffer[1024] = {0}; // we can use the buffer to read chunks at a time instead of one at a time.

    if (p_file == NULL) {
        printf("could not read the file for whatever reason, okay?");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), p_file) != NULL) {
        printf("%s", buffer);
    }

    fclose(p_file);

    return 0;

}