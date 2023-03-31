/*

read(counter)
read(num)

smallest = num

while counter++ < 5{
    if num < smallest:
        smallest = num
    read(num)

print(smallest)
}

*/

#include <stdio.h>

int main() {
    long long int counter, num, smallest;
    int i = 0;

    scanf("%lld", &counter);

    smallest = num;

    while (i++ < counter) {
        scanf("%lld", &num);
        if (num < smallest) {
            smallest = num;
        }
    }

    printf("%lld\n", smallest);

    return 0;
}



