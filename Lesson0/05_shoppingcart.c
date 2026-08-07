// 260806
#include <stdio.h>
#include <string.h>

int main() {

    char item[30];
    float price;
    int count;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin); // use fgets to read a line of text, including spaces
    item[strlen(item) - 1] = '\0'; // remove the newline character from the end of the string, replace with null terminator

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf(" %d", &count);

    printf("You have bought %d %s/s \nThe total is: %.2f \n", count, item, price * count);

    return 0;

}