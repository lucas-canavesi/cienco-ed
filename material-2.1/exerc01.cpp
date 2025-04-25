#include <iostream>
using namespace std;

typedef struct {
    string nome;
    string endereco;
    string CPF;
    int idade;
} Pessoa;

int main() {
    Pessoa pessoas[5];

    cout << "Cadastro de 5 pessoas:\n";
    for(int i = 0; i < 5; i++) {
        cout << "\nPessoa " << i+1 << ":\n";
        cout << "Nome: ";
        getline(cin, pessoas[i].nome);
        cout << "Endereço: ";
        getline(cin, pessoas[i].endereco);
        cout << "CPF: ";
        getline(cin, pessoas[i].CPF);
        cout << "Idade: ";
        cin >> pessoas[i].idade;
        cin.ignore();
    }

    cout << "\nDados cadastrados:\n";
    for(int i = 0; i < 5; i++) {
        cout << "\nPessoa " << i+1 << ":\n";
        cout << "Nome: " << pessoas[i].nome << "\n";
        cout << "Endereço: " << pessoas[i].endereco << "\n";
        cout << "CPF: " << pessoas[i].CPF << "\n";
        cout << "Idade: " << pessoas[i].idade << "\n";
    }

    return 0;
}
