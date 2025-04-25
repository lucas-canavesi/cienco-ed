#include <iostream>
#include <vector>
#include <limits>

using namespace std;

struct Paciente {
    string nome;
    int idade;
    string sintoma;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    vector<Paciente> p;

    cout << "Registro de pacientes. Digite -99 para encerrar." << endl;

    while (true) {
        Paciente paciente;

        cout << "Digite o nome do paciente (ou -99 para sair): ";
        getline(cin, paciente.nome);


        if (paciente.nome == "-99") {
            break;
        }

        cout << "Digite a idade do paciente: ";
        cin >> paciente.idade;


        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Qual é o sintoma do paciente: ";
        getline(cin, paciente.sintoma);

        p.push_back(paciente);
        cout << endl;
    }


    cout << "\nPacientes cadastrados:\n";
    cout << "----------------------------------------\n";
    for (const auto& paciente : p) {
        cout << "Nome: " << paciente.nome << endl;
        cout << "Idade: " << paciente.idade << endl;
        cout << "Sintoma: " << paciente.sintoma << endl;
        cout << "----------------------------------------\n";
    }

    return 0;
}
