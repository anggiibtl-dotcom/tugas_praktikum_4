#include <stdio.h>

int main() {
    int pilihan;
    float nilai1, nilai2, hasil;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);
        
        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Faldino Pardimata Hutabarat\n");
            break;
        }
        
        if (pilihan < 1 || pilihan > 5) {
            printf("Input anda salah, silahkan coba lagi\n\n");
            continue;
        }
        
        printf("Masukkan nilai pertama : ");
        scanf("%f", &nilai1);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &nilai2);
        
        if (pilihan == 1) {
            hasil = nilai1 + nilai2;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);
        } else if (pilihan == 2) {
            hasil = nilai1 - nilai2;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);
        } else if (pilihan == 3) {
            hasil = nilai1 * nilai2;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);
        } else if (pilihan == 4) {
            if (nilai2 != 0) {
                hasil = nilai1 / nilai2;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);
            } else {
                printf("Error: Pembagian dengan nol tidak dipe  rbolehkan\n\n");
            }
        }
    }-

    return 0;
}