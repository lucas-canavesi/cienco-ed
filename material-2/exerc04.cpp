#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Estudante {
    string nome;
    float notaFinal;
    string situacao;
};

int main() {
    vector<Estudante> estudantes;
    char continuar;

    cout << "=== SISTEMA DE REGISTRO ACADÊMICO ===\n\n";

    do {
        Estudante novoEstudante;

        cout << "Nome do estudante: ";
        getline(cin, novoEstudante.nome);

        cout << "Nota final (0-10): ";
        cin >> novoEstudante.notaFinal;

        novoEstudante.situacao = (novoEstudante.notaFinal >= 6.0) ? "Aprovado" : "Reprovado";


        estudantes.push_back(novoEstudante);

        cout << "\nDeseja cadastrar outro estudante? (s/n): ";
        cin >> continuar;
        cin.ignore();

    } while (continuar == 's' || continuar == 'S');


    cout << "\n=== RELATÓRIO FINAL ===\n";
    cout << fixed << setprecision(1);
    cout << "---------------------------------\n";
    cout << left << setw(25) << "NOME" << setw(10) << "NOTA" << "SITUAÇÃO\n";
    cout << "---------------------------------\n";

    for (const auto& estudante : estudantes) {
        cout << left << setw(25) << estudante.nome
             << setw(10) << estudante.notaFinal
             << estudante.situacao << "\n";
    }

    cout << "\nTotal de estudantes registrados: " << estudantes.size() << endl;
    return 0;
}
