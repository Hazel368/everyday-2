#include <stdio.h>

typedef struct {
    int kode;
    char judul[50];
    char penulis[50];
    int tahun_terbit;
    float harga;
    int stok;
} Buku;

Buku DaftarBuku[5] = {
    {101, "Sang Pemimpi", "Andrea Hirata", 2006, 23.0, 35},
    {102, "Bidadari-Bidadari Surga", "Tere Liye", 2010, 21.5, 28},
    {103, "Ronggeng Dukuh Paruk", "Ahmad Tohari", 1982, 19.75, 40},
    {104, "Perahu Kertas", "Dee Lestari", 2008, 24.2, 22},
    {105, "Sepotong Hati yang Baru", "Titi Qadarsih", 2005, 17.8, 15}};

void DisplayBuku(Buku *dataBuku);
char Offering();
int Buy(Buku *dataBuku);
void UpdateStokBuku(Buku *dataBuku);

int main() {
    printf("\n\t\t\tSELAMAT DATANG DI TOKO BUKU TRALALA\n");
    printf("Berikut adalah stok buku kami:\n");
    DisplayBuku(DaftarBuku);

    if (Offering() == 'Y') {
        Buy(DaftarBuku);
    }
}

void DisplayBuku(Buku *dataBuku) {
    printf("=========================================================================================\n");
    printf(" %-5s| %-25s| %-20s| %-15s| %-7s| %-7s\n", "Kode", "Judul", "Penulis", "Tahun Terbit", "Harga", "Stok");
    printf("=========================================================================================\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %-5d| %-25s| %-20s| %-15d| %-7.3f| %-7d\n", dataBuku[i].kode, dataBuku[i].judul, dataBuku[i].penulis, dataBuku[i].tahun_terbit, dataBuku[i].harga, dataBuku[i].stok);
    }
    printf("=========================================================================================\n\n");
}

char Offering() {
    char respon;
    printf("Arep tuku a cak?? (y/n) : ");
    scanf("%c", &respon);
    switch (respon) {
    case 'Y':
    case 'y':
        return 'Y';
        break;
    case 'N':
    case 'n':
        return 'N';
        break;
    default : 
        printf("Input yang ada masukan salah");
    }
}

int Buy(Buku *dataBuku) {
    int kodeBuku, jumlahBeli;
    printf("Masukan Kode Buku : ");
    scanf("%d", &kodeBuku);
    printf("Masukan Jumlah : ");
    scanf("%d", &jumlahBeli);

    for (int i = 0; i < 5; i++) {
        if (kodeBuku == dataBuku[i].kode) {
            if (jumlahBeli > dataBuku[i].stok) {
                printf("Maaf, stok buku tidak mencukupi untuk pembelian ini.\n");
                return -1;
            }
            dataBuku[i].stok -= jumlahBeli;
            printf("Nota Pembelian Anda : \n");
            printf("\n\t\t\t\tTOKO BUKU Tralala\n");
            printf("\t\t\tPoliteknik Elektronika Negeri Surabaya\n");
            printf("\t-----------------------------------------------------------------\n");
            printf("\t %-5s %-25s %-15s %-10s\n", "Kode", "Judul", "Harga", "Jumlah");
            printf("\t---------------------------------------------------------------\n");
            printf("\t %-5d %-25s %-15.3f %-10d\n", dataBuku[i].kode, dataBuku[i].judul, dataBuku[i].harga, jumlahBeli);
            printf("\t-----------------------------------------------------------------\n");
            printf("\t\t\t\t\t\tTotal Harga :    %.3f\n", dataBuku[i].harga * jumlahBeli);
            printf("\t Kasir : Cak Ridho\n");
            printf("\t-----------------------------------------------------------------\n");
            printf("\n\t\t\t=========TERIMAKASIH=========\n\n\n");
            printf("Update Stok Buku : \n");
            DisplayBuku(DaftarBuku);
            printf("Buku dengan kode %d judul : %s telah terjual %d pcs\n", dataBuku[i].kode, dataBuku[i].judul, jumlahBeli);
            
            return 0;
        }
    }

    printf("Buku dengan kode %d tidak ditemukan.\n", kodeBuku);
    return -1;
}


