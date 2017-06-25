/* Hello World program */

#include<stdio.h>

main()
{
    printf("Hello World!");
    printf("\n");
}

void doLoop(int n) {
    for (int i = 0; i < n; i ++) {
        printf("This is line #" + i + "\n");
    }
}
