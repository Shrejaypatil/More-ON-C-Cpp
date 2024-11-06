#include <stdio.h>

int main()
{

    const int x = 10; // its constant so we need to intialize it as well and we can never change its value.

    printf("%d \n", x);

    // x = 20; // throws error;

    /*
    more concepts of constants with pointers

    1. constant pointers // value can change, address cant change
    2. pointer to constant // value cannot change , address can change
    3. contant pointer to pointer // nothing can change

    */

    int y = 20;
    int z = 30;

    const int *ptr = &y;

    printf("%d %d \n", *ptr, ptr);

    ptr = &x;

    printf("%d %d \n", *ptr, ptr);

    // *ptr = 100; // throws error

    int *const p = &z;

    // p = &y; //throws error

    *p = 200;

    printf("%d %d %d\n", *p, p, z);


    const int *const pp = &z;

    // pp = &y;
    // *pp = 100;  // both errors

    return 0;
}