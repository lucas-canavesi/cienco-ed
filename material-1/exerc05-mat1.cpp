#include <iostream>

using namespace std;

int main()
{

    int N;
    int matrizA[N], matrizB[N], soma[N];

    cout<<"Entre com um numero inteiro: "<<endl;
    cin>>N;

    for (int i = 0; i < N; i += 1) {


      cout<<"Entre com os valores do vetor A e B na posicao "<<i+1<<": "<<endl;
      cin>>matrizA[i];
      cin>>matrizB[i];
      soma[i] = matrizA[i]+matrizB[i];

    }
    system("clear");
    for (int i = 0; i < N; i += 1) {

      cout<<matrizA[i]<<" + "<<matrizB[i]<<" = "<<soma[i]<<endl;

    }


    return 0;
}
