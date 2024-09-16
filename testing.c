#include <stdio.h>
//Mengurutkan Bilangan
int main() {
    int n;
    scanf("%d", &n);

    int nilai[n];
    for(int x = 0; x < n; x++){
        scanf("%d", &nilai[x]);
    }

    for(int x = 0; x < n - 1; x++){
        for(int y = 0; y < n - x - 1; y++){
            if (nilai[y] > nilai[y + 1]){
                int temp = nilai[y];
                nilai[y] = nilai[y + 1];
                nilai[y + 1] = temp;
            }
        }
    }

    for (int x = 0; x < n; x++){
        printf("%d\n", nilai[x]);
    }

    return 0;
}