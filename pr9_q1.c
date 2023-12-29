/*

*/

#include<stdio.h>

void main() {
    
    FILE *even, *odd;
    int i;

   
    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    if (even == NULL || odd == NULL) {
        printf("can't open file\n");
        
    }
    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(even, "%d\n", i);
        } else {
            fprintf(odd, "%d\n", i);
        }
    }

   
    printf("Successfully added even and odd numbers to files\n");

}
