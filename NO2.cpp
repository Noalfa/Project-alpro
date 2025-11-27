#include <iostream>
using namespace std;


void BalikKata(char kalimat[]) {
    char hasil[100];
    int id = 0;
    int pjg = 0;


    while (kalimat[pjg] != '\0') {
        pjg++;
    }


    for (int i = pjg - 1; i >= 0; i--) {
        if (kalimat[i] == ' ' || i == 0) {
            int start;
            if (i == 0)
                start = 0;
            else
                start = i + 1;

            while (kalimat[start] != ' ' && kalimat[start] != '\0') {
                hasil[id] = kalimat[start];
                id++;
                start++;
            }
            if (i != 0) {
                hasil[id] = ' ';
                id++;
            }
        }
    }

    hasil[id] = '\0'; // akhir string

    cout << "Hasil : "<<hasil << endl;
}

int main() {
    char kalimat[100];

    cout << "Kalimat : ";cin.getline(kalimat, 100);

    BalikKata(kalimat);

    return 0;
}
