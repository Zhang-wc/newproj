#include <stdio.h>
#include <string.h>
//#include "child.h"

int func()
{
    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("bit good!!!\n");
    }
    return 0;
}
int main(int argc, char *argv[])
{
    char *ptr = NULL;
    int i = 0;
    for (i = 0; i < argc; i++) {
        printf("argv[%d]=[%s]\n", i, argv[i]);
    }
    print_bit();
    printf("hello bit!!!\n");
    func();
    memcpy(ptr, "sadfdgf", 5);

    return 0;
}
