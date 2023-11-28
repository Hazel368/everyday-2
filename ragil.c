#include <stdio.h>
#include <string.h>

// Struktur untuk menyimpan informasi buku
struct Book {
    char title[100];
    char author[50];
    int year;
    float price;
    int stock;
};

// Fungsi untuk menampilkan informasi buku
void displayBook(struct Book book) {
    printf("Judul: %s\n", book.title);
    printf("Penulis: %s\n", book.author);
    printf("Tahun Terbit: %d\n", book.year);
    printf("Harga: %.2f\n", book.price);
    printf("Stok: %d\n", book.stock);
}

// Fungsi untuk menambahkan buku ke dalam stok
void addBook(struct Book *book, int quantity) {
    book->stock += quantity;
}
// Fungsi untuk melakukan pembelian buku
void purchaseBook(struct Book *book, int quantity) {
    if (quantity <= book->stock) {
        book->stock -= quantity;
        printf("Pembelian berhasil. Terima kasih!\n");
    } else {
        printf("Maaf, stok tidak mencukupi.\n");
    }
}

int main() {
    // Inisialisasi buku
    struct Book book1 = {"Harry Potter", "J.K. Rowling", 2001, 25.5, 50};

    // Menampilkan informasi buku
    displayBook(book1);

    // Menambahkan stok buku
    addBook(&book1, 20);
    printf("Stok setelah penambahan: %d\n", book1.stock);

    // Melakukan pembelian buku
    purchaseBook(&book1, 15);
    printf("Stok setelah pembelian: %d\n", book1.stock);

    return 0;
}