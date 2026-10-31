#include <stdio.h>

int main() {
    int a1, a2;
    scanf("%d %d", &a1, &a2);    int i = a1;
    int j = a2;
    if (a1 < a2) {
        while (i <= a2 && j >= a1) {
            printf("%d %d", i, j);
            if (i < a2) {
                printf(" - ");
            }
            i++;
            j--;
        }
    } 
    else {
        while (i >= a2 && j <= a1) {
            printf("%d %d", i, j);
            if (i > a2) { 
                printf(" - ");
            }
            i--;
            j++;
        }
    }
    printf("\n");

    return 0;
}
