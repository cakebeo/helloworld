/* Hello World program */

#include<stdio.h>

main()
{
    printf("Hello World!");
    printf("\n");
    /* TODO
     */
    // Once again, this line has been added directly on GitHub
}

void doLoop(int n) {
    for (int i = 0; i <= n; i ++) { // Why changing the condition from < to <= ???
        printf("This is line #" + i + "\n");
    }
}

int lcSquare(int n) {
    return n * n;
}

int lcCube(int n) {
    return n*lcSquare(n);
}

int rmSquare(int n) {
    return n * n;
}

int rmCube(int n) {
    return n * rmSpare(n);
}
