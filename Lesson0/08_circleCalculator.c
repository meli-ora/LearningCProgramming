//260809 moved to codespace now
/*

Terminal Instructions:

How to compile as exe:
gcc Lesson0/08_circleCalculator.c -o Lesson0/08_circleCalculator.exe

Note for math library functions to be used I need to include "-lm" at the end of the command
gcc Lesson0/08_circleCalculator.c -o Lesson0/08_circleCalculator.exe -lm

How to run the exe:
./Lesson0/08_circleCalculator.exe

*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    const double PI = 3.14159;

    double radius = 0; // input

    double area = 0;
    double circumference = 0;
    double sphereVolume = 0;

    printf("Enter the radius: ");
    scanf(" %lf", &radius);

    area = PI * pow(radius, 2);
    circumference = 2 * PI * radius;
    sphereVolume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area: %.2lf\n", area);
    printf("Circumference: %.2lf\n", circumference);
    printf("Sphere Volume: %.2lf\n", sphereVolume);

    return 0;

}