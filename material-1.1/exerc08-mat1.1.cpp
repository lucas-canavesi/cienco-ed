#include <iostream>

using namespace std;

int main()
{
    const int TAMANHO = 5;
    int vetor[TAMANHO];
    int *ptr = vetor;


    cout << "Digite " << TAMANHO << " valores inteiros:\n";
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> *(ptr + i);
    }


    int soma = 0;
    for (int i = 0; i < TAMANHO; i++) {
        soma += *(ptr + i);
    }


    float media = soma / (float)TAMANHO;


    cout << "\nA media dos valores e: " << media << endl;

    return 0;
}
