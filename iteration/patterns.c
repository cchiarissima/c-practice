// patterns.c 
// Print triangles made of asterisks

#include <stdio.h>

int main() {

    // Upright left
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < i; j++) {
            printf("%s", "*");
        } 
        puts("");
    } 

    puts("");

    // Upside down left
    for (int i = 10; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        } 
        puts("");
    } 

    // Upright right
    int i; 
    for (i = 0; i < 10; i++) {
      
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
      
        for (int k = 0; k < (10 - i); k++) {
          printf("%s", "*");
        }
        puts("");
    }

}