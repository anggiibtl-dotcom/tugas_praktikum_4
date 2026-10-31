#include <stdio.h>

int main() {
    int n, m;
    int total_keseluruhan = 0;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        int total_baris = 0;

        for (int j = i; j >= 1; j--) {
            total_baris += (j * m);
            printf("(%d * %d)", j, m);
            if (j > 1) {
                printf(" + ");
            }
        }
        total_keseluruhan += total_baris;
        printf(" = %d\n", total_baris);
    }
    printf("%d\n", total_keseluruhan);

    return 0;
}