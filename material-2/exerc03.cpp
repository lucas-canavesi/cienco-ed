#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Filme {
    string titulo;
    float enredo;
    float atuacao;
    float efeitosEspeciais;
    float media;
};

int main() {
    vector<Filme> filmesAvaliados;
    char continuar;

    cout << "==== SISTEMA DE AVALIAÇÃO DE FILMES ====\n\n";

    do {
        Filme novoFilme;

        cout << "Título do filme: ";
        getline(cin, novoFilme.titulo);

        cout << "Nota para o enredo (0-10): ";
        cin >> novoFilme.enredo;

        cout << "Nota para a atuação (0-10): ";
        cin >> novoFilme.atuacao;

        cout << "Nota para efeitos especiais (0-10): ";
        cin >> novoFilme.efeitosEspeciais;


        novoFilme.media = (novoFilme.enredo + novoFilme.atuacao + novoFilme.efeitosEspeciais) / 3;


        filmesAvaliados.push_back(novoFilme);

        cout << "\nDeseja avaliar outro filme? (s/n): ";
        cin >> continuar;
        cin.ignore();

    } while (continuar == 's' || continuar == 'S');


    cout << "\n==== RESULTADOS DAS AVALIAÇÕES ====\n";
    for (const auto& filme : filmesAvaliados) {
        cout << "\nFilme: " << filme.titulo << "\n";
        cout << fixed << setprecision(1);
        cout << "Enredo: " << filme.enredo << "\n";
        cout << "Atuação: " << filme.atuacao << "\n";
        cout << "Efeitos especiais: " << filme.efeitosEspeciais << "\n";
        cout << "Média geral: " << filme.media << "\n";
    }

    cout << "\nTotal de filmes avaliados: " << filmesAvaliados.size() << endl;
    return 0;
}
