// Static arrays are initialidez to zero
// Como programar en C/C++
// pag. 218

#include <stdio.h>

viod staticArrayInit(void);
void automaticArrayInit(void);

main() {
    printf("First call to each funtion:\n");
    staticArrayInit();
    automaticArrayInit();
    
    printf("\n\nSecond call to each function:\n");
    staticArrayInit();
    automaticArrayInit();

    return 0;
}


// Function to demonstrate a static local array

void staticArrayInit(void) {
    static int a[3];
    int i;

    printf("\nValues on entering staticArrayInit:\n");

    for i = 0; i <= 2; i++
        printf("array1[%d] = %d ", i, a[i]);

        
