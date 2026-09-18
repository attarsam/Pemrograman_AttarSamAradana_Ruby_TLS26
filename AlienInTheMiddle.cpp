#include <iostream>
using namespace std;


int panjangPesan(char pesan[]) {
    int panjang = 0;
    while (pesan[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}


int posisiHuruf(char huruf) {
    if (huruf >= 'a' && huruf <= 'z') {
        return huruf - 'a' + 1;
    }
    return huruf - 'A' + 1;
}


char konversiHuruf(int nilai) {
    return (char)('A' + nilai - 1);
}

int main() {
    char pesan[101];
    int nilai[101];
    char hasil[101];

    cout << "Masukkan pesan: ";
    cin.getline(pesan, 101);

    int n = panjangPesan(pesan);

    nilai[1] = posisiHuruf(pesan[0]);
    hasil[1] = konversiHuruf(nilai[1]);

    int i = 2;
    while (i <= n) {
        nilai[i] = posisiHuruf(pesan[i - 1]) + posisiHuruf(pesan[i - 2]);

        if (nilai[i] > 26) {
            nilai[i] = nilai[i] - 26;
        }

        hasil[i] = konversiHuruf(nilai[i]);
        i = i + 1;
    }

    cout << "Pesan tersandi: ";
    for (int j = 1; j <= n; j++) {
        cout << hasil[j];
    }
    cout << endl;

    return 0;
}
