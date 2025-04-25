#include <iostream>
using namespace std;

int main() {
    int TAMANHO = 10;
    int vetor[TAMANHO];


    cout << "Digite " << TAMANHO << " valores inteiros:\n";
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }


    cout << "\nVetor na ordem normal:\n";
    int *ptr = vetor;
    for (int i = 0; i < TAMANHO; i++) {
        cout << *(ptr + i) << " ";
    }


    cout << "\n\nVetor na ordem inversa:\n";
    ptr = vetor + TAMANHO - 1;
    for (int i = 0; i < TAMANHO; i++) {
        cout << *(ptr - i) << " ";
    }

    cout << endl;
    return 0;
}
