/* 260812

gcc 25_pointers.c -o 25_pointers.exe -lm
./25_pointers.exe

https://youtu.be/xND0t1pr3KY?is=mX0CmUuUxwM5tjxV

*/

#include <stdio.h>

/*
void birthday(int age) {
    age++; // pass by reference, so cloned
}
*/

void birthday(int *age) {
    (*age)++; // pass the address, dereference to get the value, increment the value
}

int main() {

    int age = 25;
    int *p_age = &age;

    printf("%p\n", &age);
    printf("%p\n", p_age);

    birthday(p_age);
    printf("birthday is supposed to pass (age + 1), but I need to pass the address and derefernece instead of putting the value straight up aka passing by value\n");
    printf("%d\n", age);

    return 0;

}