// 260806
#include <stdio.h>
#include <string.h>

int main() {

    int age; // declare variable, aka allocate memory for it
    printf("Enter my age: "); // scanner only gets input, not output
    scanf("%d", &age); // scanner gets input from user, and assigns it to the memory address of the variable age
    printf("My age is: %d\n", age); // outputs it

    float gpa;
    printf("Enter my GPA: ");
    scanf("%f", &gpa);
    printf("My GPA is: %.2f\n", gpa);

    char grade;
    printf("Enter my grade: ");
    scanf(" %c", &grade); // note the space before %c, it helps to ignore any whitespace characters including newline
    printf("My grade is: %c\n", grade);

    char name[30];
    printf("Enter my name: ");
    scanf(" %s", name); // no & needed for arrays, as the array name is
    printf("My name is: %s\n", name);

    char title[50];
    getchar(); // consume the leftover newline character from previous input
    printf("Enter my title that has multiple words: ");
    fgets(title, sizeof(title), stdin); // use fgets to read a line of text, including spaces
    name[strlen(name) - 1] = '\0'; // remove the newline character from the end of the string, replace with null terminator
    title[strlen(title) - 1] = '\0'; // remove the newline character from the end of the string, replace with null terminator
    printf("My title is: %s", title);

    return 0;

}