/* 260830

multifile compilation
step 0: ensure you have function declarations for everything you plan to use
right below your #include(s). basically any functions you plan on using in other files
step 1: navigate to folder, 'cd cProjects/blackjack/'
step 2: multifile compile, 'gcc blackjack.c meliMath.c -o blackjack'
step 3: load, './blackjack'

- I learned I cannot pass arrays as function arguments to get sizeof().
This is because they 'decay' AKA auto converted to pointers.

*/

#include <stdio.h> // needed for printing
#include <stdlib.h> // needed for rand
#include <time.h> // needed to set rand to something else

// RANDOM SECTION //

/*
To use rand(), this function should be called, and <stdlib.h> and <time.h> should be included.
*/
void initializeRand() {
    srand(time(NULL));
}

/*
Get a random integer between min and max.
*/
int randInt(int min, int max) {

    int difference = max - min;
    
    if (difference == 0) {
        return min;
    } else if (difference < 0) {
        printf("randIntInRange: invalid min, max. max less than min.");
        return 0;
    }

    return (rand() % (difference + 1)) + min;

}

/*
Gets a random float between 0-1.
*/
float randAlpha() {
    return (float)rand() / (float)RAND_MAX;
}