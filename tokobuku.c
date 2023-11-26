#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Include <string.h> for string-related functions

struct tokobuku {
    char judul[50];   
    char judul[50];   
    char penulis[50]; 
    int tahun;
    double harga;
};

int main() {
    struct tokobuku buku1 = {"Negeri 5 Menara", "Ahmad Fuadi", 2009, 29000};

    printf("Buku 1\n");
    printf("Judul buku  : %s\n", buku1.judul); // Use %s for strings
    printf("Penulis buku adalah : %s\n", buku1.penulis);
    printf("Tahun terbit buku : %d\n", buku1.tahun);
    printf("Harga buku tersebut : %.2f\n", buku1.harga);

    return 0;
}
