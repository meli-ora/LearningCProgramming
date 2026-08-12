// 260806
#include <stdio.h> // Include the standard input-output library
#include <stdbool.h> // Include the standard boolean library

void printNums() {

    int age = 25;
    float meme = 67.67;
    double pi = 3.14159265358979323846;

    printf("I am not %d years old, get good\n", age);
    printf("this number is a meme %.2f\n", meme);
    printf("pi is this %.15lf\n", pi);

}

void printStrings() {
    
    char firstLetter = 'M';
    char name[] = "Meliora";

    printf("The first letter of my name is %c\n", firstLetter);
    printf("Because my name is %s\n", name);

}

void printBools() {

    bool isHere = false;

    printf("Am I here? ");

    if (isHere) {
        printf("Yes I am\n");
    } else {
        printf("No I am not\n");
    }

}

int main() {

    printNums();

    printStrings();

    printBools();

    return 0;
    
}