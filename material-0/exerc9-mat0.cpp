#include <iostream>

using namespace std;

int main()
{
    float altura[10];
    float maiorAluno = altura[9], menorAluno = altura[0];
    int numeroAluno=0,numMenorAluno=0;

    for (int i = 0; i < 10; i+=1) {

      cout<<"Entre com a altura do aluno "<<i+1<<endl;
      cin>>altura[i];

    }
    for (int i=0; i < 10; i+=1) {

      cout << "Aluno " <<  i + 1 << " ->" << "Altura: " << altura[i]<< " m."<<endl;

       if (altura[i] > maiorAluno) {

         maiorAluno = altura[i];
         numeroAluno = i+1;

       }

       if (altura[i] < menorAluno) {

         menorAluno = altura[i];
         numMenorAluno = i+1;

       }
     }
     cout<<endl;
     cout << "O aluno "<<numeroAluno<<" e o mais alto. Altura: " <<maiorAluno<<" m"<<endl;
     cout << "O aluno "<<numMenorAluno<<" e o mais baixo. Altura: " <<menorAluno<<" m"<<endl;
    return 0;
}
