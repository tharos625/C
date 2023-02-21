//A scoping example

#include <stdio.h>

void a(void);
void b(void);
void c(void);

int x = 1;

main() {
    int x = 5;

    printf("local x in outer scope of main is %d\n", x);

    {
        int x = 7;

        printf("local x inner scope of main %d\n", x);
    }

    printf("local x in outer scope of main %d\n", x);

    a();
    b();
    c();

    printf("local x in main is %d\n", x);
    return 0;
 }

 void a(void) {
    int x = 25;

    printf("\nlocal x in a is %d after entering a\n", x);
    ++x;
    printf("local x in a is %d before exiting a\n", x);
}

void b(void) {
    static int x = 50;
    printf("\nlocal static x is %d on entering b\n", x);
    ++x;
    printf("local static x is %d on exiting b\n", x);
}

void c(void) {
    printf("\nglobal x is %d on entering c\n", x);
    x *= 10;
    printf("global x is %d on exiting c\n", x);
        }
