/* This program introduces the topic of survey data analysis.
   It computes the mean, median, and mode of the data. 
   Pag. 226 - Como programar en C/C++ */

#include <stdio.h>

#define SIZE 99

void mean(int []);
void median(int []);
void mode(int [], int []);
void bubbleSort(int[]);
void printArray(int[]);

int main() {
    int frequency[10] = {0},
    response[SIZE] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                      7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                      6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                      7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                      6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                      7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                      5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                      7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
                      7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                      4, 5, 6, 1, 6, 5, 7, 8, 7};
    
    mean(response);
    median(response);
    mode(frequency, response);
    return 0;
}

void mean(int answer[]) {
    int j, total = 0;

    printf("%s\n%s\n%s\n", "********", "  Mean", "********");

    for (j = 0; j <= SIZE - 1; j++)
        total += answer[j];

    printf("The mean is the average value of the data\n"
           "items. The mean is equal to the total of\n"
           "all the data items divided by the number\n"
           "of date items (%d). The mean value for\n"
           "this run is: %d / %d = %.4f\n\n",
           SIZE, total, SIZE, (float) total / SIZE);
}

void median(int answer[]) {
    printf("\n%s\n%s\n%s\n%s", "********", " Median", "********",
                               "The unsorted array of responses is");

    printArray(answer);
    bubbleSort(answer);
    printf("\n\nThe sorted array is");
    printArray(answer);
    printf("\n\nThe median is element %d of\n"
           "the sorted %d element array.\n"
           "For this run the median is %d\n\n",
           SIZE / 2, SIZE, answer[SIZE / 2]);
}

void mode(int freq[], int answer[]) {
    int rating, j, h, largest = 0, modeValue = 0;

    printf("\n%s\n%s\n%s\n",
           "********", "   Mode", "********");

    for (rating = 1; rating <= 9; rating++)
        freq[rating] = 0;

    for (j = 0; j <= SIZE - 1; j++)
        ++freq[answer[j]];

    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
           "Response", "Frequency", "Histogram",
           "1    1    2    2", "5    0    5    0    5");

    for (rating = 1; rating <= 9; rating++) {
        printf("%8d%11d           ", rating, freq[rating]);

        if (freq[rating] > largest) {
            largest = freq[rating];
            modeValue = rating;
        }

        for (h = 1; h <= freq[rating]; h++)
            printf("*");

        printf("\n");
    }

    printf("The mode is the most frequent value.\n"
           "For this run the mode is %d which occurred"
           " %d times.\n", modeValue, largest);

}

void bubbleSort(int a[]) {
    int pass, j, hold;

    for(pass = 1; pass <= SIZE -1; pass++)
        
        for (j = 0; j <= SIZE -2; j++)

            if (a[j] > a[j+1]) {
                hold = a[j];
                a[j] = a[j+1];
                a[j + 1] = hold;
            }
}

void printArray(int a[]) {
    int j;

    for (j = 0; j <= SIZE -1; j++) {

        if (j % 20 == 0)
            printf("\n");

        printf("%2d", a[j]);
    }
}
