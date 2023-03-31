#include <stdio.h>
#include <stdlib.h>

// function from https://github.com/archie94/Codes/blob/master/Other/Length%20of%20Longest%20Increasing%20Subsequence.c

int lis(int n, int *arr) {
    int *LIS,i,j,max=0;

    // initialise the LIS array to all 1
    LIS=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        LIS[i]=1;

    // Compute LIS value in bottom up mannner
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        if(arr[j]<arr[i] && (LIS[j]+1)>LIS[i])
        LIS[i]=LIS[j]+1;
    }
    // Find maximum LIS value
    for(i=0;i<n;i++)
    if(max<LIS[i])
    max=LIS[i];

    return max;
}

int main() {
    int n, min_step;
    int *array;

    // make and fill in the array
    scanf("%d", &n);
    array = malloc(sizeof(int)*n);
    for (int p=0; p<n; p++) scanf("%d", &array[p]);

    // the min. step is just len(array) - len(LIS)
    min_step = n - lis(n, array);

    // print the output
    printf("%d\n", min_step);

    return 0;
}