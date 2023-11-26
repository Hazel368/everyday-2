#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct
struct tokobuku {
    char judul[50];
    char penulis[50];
    int tahun;
    double harga;
};

int main() {
    // Declare variables of type struct tokobuku
    struct tokobuku buku1 = {"Negeri 5 Menara", "Ahmad Fuadi", 2009, 29};
    struct tokobuku buku2 = {"Koala Kumal", "Raditya Dika", 2015, 20};
    struct tokobuku buku3 = {"Pantai dan Kehidupannya", "Edy Karsono",  1996, 25};

    // Print data from the struct
    printf("Buku 1\n");
    printf("Judul buku  : %s\n", buku1.judul);
    printf("Penulis buku adalah : %s\n", buku1.penulis);
    printf("Tahun terbit buku : %d\n", buku1.tahun);
    printf("Harga buku tersebut : %.3f\n", buku1.harga);

    printf("Buku 2\n ");
    printf("Judul buku : %s\n", buku2.judul);
    printf("Penulis buku adalah : %s\n", buku2.penulis);
    printf("Tahun terbit buku : %d\n ", buku2.tahun);
    printf("Harga buku tersebut : %.3f\n", buku2.harga);
    
    printf("Buku 3\n ");
    printf("Judul buku : %s\n", buku3.judul);
    printf("Penulis buku adalah : %s\n", buku3.penulis);
    printf("Tahun terbit buku : %d\n ", buku3.tahun);
    printf("Harga buku tersebut : %.3f\n", buku3.harga);

    return 0;
}
