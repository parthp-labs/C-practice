#include <stdio.h>

// How to Find Maximum Value in an Array in C?
int main() {
    int myarr[] = {1,2,3,4,10,40,22,12};

    int max = myarr[0];
    for (int i=0;i<sizeof(myarr)/sizeof(int);i++) {
        if (max < myarr[i]) {
            max = myarr[i];
        }
    }

    printf("Max number is: %i", max);

    return 0;
}