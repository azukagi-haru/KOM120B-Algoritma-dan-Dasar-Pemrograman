#include <stdio.h>
#define SIZE 1000

/* failed function
long long int reverse(long long int n, long long int arr[n]) {
    long long int new_array[SIZE] = {0};
    for (int i=0; i < n/2; i++) {
        new_array[i] = arr[n-1-i];
        new_array[n-1-i] = arr[i];
    }
}
*/

/* not failed but thought of better solution 
void print_array(int n, int arr[n]) {
    for (int i=0; i < n; i++) {
        printf("%d", arr[i]);
        if (i == n-1) printf("\n");
        else printf(" ");
    }
}
*/


// kill 2 birds with 1 stone -- ok maybe not better but at least it solved the problemof not having to.... WAIT I JUST REALIZE
/* i think i have a better solution now
void rev_n_print(int n, int array[n]) {
    int tmp;
    // reversing part
    for (int i=0; i < n/2; i++) {
        tmp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = tmp;
    }
    // printing part
    for (int j=0; j < n; j++) {
        printf("%d", array[j]);
        if (j == n-1) printf("\n");
        else printf(" ");
    }
}
*/

// more modular solution, nice
// note that this function DOES NOT make a copy of the array, it just reverse it
void reverse_array(int n, int array[n]) {
    int tmp;
    for (int i=0; i < n/2; i++) {
        tmp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = tmp;
    }
}

void print_array(int n, int arr[n]) {
    for (int i=0; i < n; i++) {
        printf("%d", arr[i]);
        if (i == n-1) printf("\n");
        else printf(" ");
    }
}

int main() {
    int array[SIZE] = {0};
    int n;
    
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%d", &array[i]);
    }
    
    reverse_array(n, array);
    print_array(n, array);

    return 0;
}