#include <iostream>
using namespace std;


bool isGenap(int angka) {
    return angka % 2 == 0;
}

int main() {
    int n, k;

    cout << "Masukkan N: ";
    cin >> n;
    cout << "Masukkan K: ";
    cin >> k;

    
    while (n > 1) {
        
        n = n - 1;

        
        if (isGenap(k)) {
            k = k + 2;
        } else {
            k = k + 1;
        }

        
        if (k < 2) {
            k = 2;
        }
    }

    cout << "Astronot tersisa: " << n << endl;
    cout << "Nilai K terakhir: " << k << endl;

    return 0;
}
