#include <stdio.h>

int main()
{
    int kartu[1000] = {0};
    int n, m, p;

    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%d", &kartu[i]);
    }

    scanf("%d %d", &m, &p);

    printf("%d\n", kartu[m+p-1]);
}