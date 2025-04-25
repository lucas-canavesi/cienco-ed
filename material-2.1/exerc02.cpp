#include <iostream>
#include <vector>
using namespace std;

typedef struct {
    string nome;
    string especie;
    int idade;
    float peso;
} Animal;

typedef Animal ListaAnimais[10];

int main() {
    ListaAnimais zoo;

    cout << "Cadastro de 10 animais do zoológico:\n";
    for(int i = 0; i < 10; i++) {
        cout << "\nAnimal " << i+1 << ":\n";
        cout << "Nome: ";
        getline(cin, zoo[i].nome);
        cout << "Espécie: ";
        getline(cin, zoo[i].especie);
        cout << "Idade: ";
        cin >> zoo[i].idade;
        cout << "Peso (kg): ";
        cin >> zoo[i].peso;
        cin.ignore();
    }

    cout << "\nAnimais cadastrados:\n";
    for(int i = 0; i < 10; i++) {
        cout << "\nAnimal " << i+1 << ":\n";
        cout << "Nome: " << zoo[i].nome << "\n";
        cout << "Espécie: " << zoo[i].especie << "\n";
        cout << "Idade: " << zoo[i].idade << " anos\n";
        cout << "Peso: " << zoo[i].peso << " kg\n";
    }

    return 0;
}
