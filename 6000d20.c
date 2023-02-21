// Roll a six-sided die 6000 times

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int face, roll;
    int frequency1 = 0, frequency2 = 0, frequency3 = 0, frequency4 = 0, frequency5 = 0;
    int frequency6 = 0, frequency7 = 0, frequency8 = 0, frequency9 = 0, frequency10 = 0;
    int frequency11 = 0, frequency12 = 0, frequency13 = 0, frequency14 = 0, frequency15 = 0; 
    int frequency16 = 0, frequency17 = 0, frequency18 = 0, frequency19 = 0, frequency20 = 0; 
    srand(time(NULL));

    for (roll = 1; roll <= 1000; roll++) {
        
        face = 1 + rand() % 20;

        switch (face) {
            case 1:
                ++frequency1;
                break;
            case 2:
                ++frequency2;
                break;
            case 3:
                ++frequency3;
                break;
            case 4:
                ++frequency4;
                break;
            case 5:
                ++frequency5;
                break;
            case 6:
                ++frequency6;
                break;
            case 7:
                ++frequency7;
                break;
            case 8:
                ++frequency8;
                break;
            case 9:
                ++frequency9;
                break;
            case 10:
                ++frequency10;
                break;
            case 11:
                ++frequency11;
                break;
            case 12:
                ++frequency12;
                break;
            case 13:
                ++frequency13;
                break;
            case 14:
                ++frequency14;
                break;
            case 15:
                ++frequency15;
                break;
            case 16:
                ++frequency16;
                break;
            case 17:
                ++frequency17;
                break;
            case 18:
                ++frequency18;
                break;
            case 19:
                ++frequency19;
                break;
            case 20:
                ++frequency20;
                break;
        }
    }

    printf("%s%13s\n", "Face", "Frequency");
    printf("   1%13d\n", frequency1);
    printf("   2%13d\n", frequency2);
    printf("   3%13d\n", frequency3);
    printf("   4%13d\n", frequency4);
    printf("   5%13d\n", frequency5);
    printf("   6%13d\n", frequency6);
    printf("   7%13d\n", frequency7);
    printf("   8%13d\n", frequency8);
    printf("   9%13d\n", frequency9);
    printf("  10%13d\n", frequency10);
    printf("  11%13d\n", frequency11);
    printf("  12%13d\n", frequency12);
    printf("  13%13d\n", frequency13);
    printf("  14%13d\n", frequency14);
    printf("  15%13d\n", frequency15);
    printf("  16%13d\n", frequency16);
    printf("  17%13d\n", frequency17);
    printf("  18%13d\n", frequency18);
    printf("  19%13d\n", frequency19);
    printf("  20%13d\n", frequency20);

    return 0;
}
