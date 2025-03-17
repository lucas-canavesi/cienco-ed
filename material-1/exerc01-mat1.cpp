#include <iostream>

using namespace std;

int main()
{
    string vetor[10], rastreador,achado;
    int contador=0;


    for (int i = 0; i < 10; i+=1){

      cout<<"Digite o nome "<<i+1<<": "<<endl;
      cin>>vetor[i];

    }

    system("clear");
    cout<<endl<<"Digite o nome que voce quer achar: "<<endl;
    cin>>rastreador;

    for (int i = 0; i < 10; i+=1){

       if (rastreador == vetor[i]){

         achado = vetor[i];
         contador += 1;

       }

      }


       if (contador > 0) {

        cout<<endl<<"Achei, nome encontrado: "<<achado<<endl;

      }
      else {

        cout<<endl<<"Nao achei!"<<endl;

      }

    return 0;
}
