#include <stdio.h>
#include <math.h>
//bil prima itu CUMA habis dibagi 1 atau dirinya sendiri, selain itu pasti ada sisa 
int isPrime(long long angka) { //khusus bil. prima
    if (angka <= 1) return 0; // angka kurang dari sama dengan 1 itu nilainya salah (ada di aturan)
    if (angka == 2) return 1; // satu"nya angka prima yang genap nilai benar
    if (angka % 2 == 0) return 0; // klo hasil mod = 0, berarti angkanya genap, nilainya salah

    long long limit = sqrt(angka); 
    for (long long b = 3; b <= limit; b += 2) { //b (bagi) dimulai dari 3 sampe limit, +2 biar ga dapet angka genap
        if (angka % b == 0) return 0; // kalau hasil bagi =0, maka angka tsb bernilai salah
    }
    return 1; 
}

int main() {
    long long ANGKA;
    scanf("%lld", &ANGKA); 

    if (isPrime(ANGKA)) {
        printf("PRIMA\n"); 
    } else {
        printf("BUKAN\n");
    }

    return 0;
}