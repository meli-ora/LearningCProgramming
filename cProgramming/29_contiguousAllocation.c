/* 260812

gcc cProgramming/29_contiguousAllocation.c -o cProgramming/29_contiguousAllocation.exe -lm
./cProgramming/29_contiguousAllocation.exe

https://youtu.be/xND0t1pr3KY?is=mX0CmUuUxwM5tjxV

*/

// malloc is faster, but gives unintended results if not initialized previously
// malloc(bytes)

// calloc also allocates memory dynamically and sets all allocated bytes to 0, so less bugs
// calloc(#, size)

#include <stdio.h>
#include <stdlib.h>

int main() {

    int numPlayers = 0;

    printf("tell me how many players are here yo: ");
    scanf("%d", &numPlayers);

    //int *scores = malloc(numPlayers * sizeof(int));
    int *scores = calloc(numPlayers, sizeof(int));

    if (scores == NULL) {
        printf("memory cannot be allocated please do not the cat otherwise your OS may be overwritten because of segmentation fault");
        return 1;
    }

    for (int i = 0; i < numPlayers; i++) {
        printf("enter the player #%d score: ", i+1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < numPlayers; i++) {
        printf("player %d: %d\n", i+1, scores[i]);
    }

    free(scores);
    scores = NULL;

    return 0;

}