#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int *arr1, *arr2, *arr3;

    scanf("%d %d", &a, &b);

    // make the arrays
    arr1 = malloc(sizeof(int)*a);
    arr2 = malloc(sizeof(int)*b);
    arr3 = malloc(sizeof(int)*(a+b));

    // fill in the arrays
    for (int m=0; m<a; m++) scanf("%d", &arr1[m]);
    for (int n=0; n<b; n++) scanf("%d", &arr2[n]);

    // fill array 3 until one of the array is used up
    int i=0, j=0, k=0;
    while (i<a && j<b) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        }
        else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    // print the rest of the elements for the other array
    while (i<a) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j<b) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    // print array 3
    for (int z=0; z<(a+b); z++) {
        printf("%d", arr3[z]);
        if (z == (a+b-1)) printf("\n");
        else printf(" ");
    }

    return 0;
}