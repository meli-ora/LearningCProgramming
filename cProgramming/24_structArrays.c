/* 260812

gcc 24_structArrays.c -o 24_structArrays.exe -lm
./24_structArrays.exe

https://youtu.be/xND0t1pr3KY?is=mX0CmUuUxwM5tjxV

*/

typedef struct {
    char model[25];
    int year;
    int price;
} Car;

#include <stdio.h>

void printCarData(Car targetCar) {
    printf("This %d %s costs $%d.\n", targetCar.year, targetCar.model, targetCar.price);
}

int main() {

    Car carList[3] = {{"mazda", 2004, 42069}, {"mustang", 1988, 30000}, {"tesla", 2020, 55000}};

    printCarData(carList[0]);
    printCarData(carList[1]);
    printCarData(carList[2]);
    
    return 0;

}