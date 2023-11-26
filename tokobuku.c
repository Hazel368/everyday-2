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
    //inisialisasi struct 
    struct tokobuku buku1 = {"Negeri 5 Menara", "Ahmad Fuadi", 2009, 29000};
    struct tokobuku buku2 = {};
    struct tokobuku buku3 = {};
    struct tokobuku buku4 = {};
    struct tokobuku buku5 = {};
    struct tokobuku buku6 = {};
    struct tokobuku buku7 = {};
    struct tokobuku buku8 = {};
    struct tokobuku buku9 = {};
    struct tokobuku buku10 = {};
    

    printf("Buku 1\n");
    printf("Judul buku  : %s\n", buku1.judul); // Use %s for strings
    printf("Penulis buku adalah : %s\n", buku1.penulis);
    printf("Tahun terbit buku : %d\n", buku1.tahun);
    printf("Harga buku tersebut : %.2f\n", buku1.harga);

    return 0;
}
