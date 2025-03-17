#include <iostream>

using namespace std;

float mediaTurma(float vet[], int tam) {

  float somaNotas = 0;

  for (int i = 0; i < tam; i+=1) {

    somaNotas += vet[i];

  }
  return somaNotas/tam;
}

int main()
{

    int quantAlunos, mediaAcim=0;

    cout<<"Entre com a quantidade de alunos da turma: "<<endl;
    cin>>quantAlunos;

    float matriz[quantAlunos];

    for (int i = 0; i < quantAlunos; i+=1) {

      cout<<endl<<"Entre com a nota "<<i+1<<": "<<endl;
      cin>>matriz[i];

    }

    cout<<endl<<"A media da turma foi: "<<mediaTurma(matriz, quantAlunos)<<endl;

       for (int i = 0; i < quantAlunos; i+=1) {

        if (matriz[i] > mediaTurma(matriz, quantAlunos)) {

          mediaAcim += 1;

        }
    }
     cout<<endl<<mediaAcim<<" alunos -> Obtiveram nota acima da media da sala."<<endl;
    return 0;
}


