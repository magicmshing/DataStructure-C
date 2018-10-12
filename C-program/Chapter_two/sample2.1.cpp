/*
* sample 2.1 求1 * 2 * 3 * 4 * 5 。
*/

#include<stdio.h>

int main() {
    int product = 1;
    for (int i = 1; i <= 5; i++){
        product = product * i;
    }
    printf("%d", product);
    return 0;
}
