#include <iostream>
#include <string>

using namespace std;

float hitung_rata_rata(float tugas1, float tugas2, float tugas3) {
    return (tugas1 + tugas2 + tugas3) / 3;
}

int main() {
    string nama_siswa;
    float nilai_tugas1, nilai_tugas2, nilai_tugas3;

    cout << "Masukkan nama siswa: ";
    getline(cin, nama_siswa);
    cout << "Masukkan nilai tugas 1: ";
    cin >> nilai_tugas1;
    cout << "Masukkan nilai tugas 2: ";
    cin >> nilai_tugas2;
    cout << "Masukkan nilai tugas 3: ";
    cin >> nilai_tugas3;

    float rata_rata = hitung_rata_rata(nilai_tugas1, nilai_tugas2, nilai_tugas3);

    cout << "Nama Siswa: " << nama_siswa << endl;
    cout << "Nilai Rata-rata: " << rata_rata << endl;

    // Penentuan apakah siswa lulus atau tidak
    if (rata_rata >= 60) {
        cout << "Status: Lulus" << endl;
    } else {
        cout << "Status: Tidak Lulus" << endl;
    }

    return 0;
}
