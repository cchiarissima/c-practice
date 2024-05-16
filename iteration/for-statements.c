// for-statements.c

#include <stdio.h>

int main() {

    // print numbers from 1 to 7
    for (int i = 1; i <= 7; i++) {
        printf("%d ", i);
    } 
    puts("");

    // print numbers from 3 to 23 with increment of 5
    for (int i = 3; i <= 23; i += 5) {
        printf("%d ", i);
    }
    puts("");

    // print numbers from 20 to -10 with decrement of 6
    for (int i = 20; i >= -10; i -= 6) {
        printf("%d ", i);
    }
    puts("");

    // print numbers from 19 to 51 with increment of 8
    for (int i = 19; i <= 51; i += 8) {
        printf("%d ", i);
    }
}
