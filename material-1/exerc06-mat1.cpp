#include <iostream>

using namespace std;

float mediaAnual (float vet[], int dia) {

  float soma=0;

  for (int i = 0; i < dia; i += 1) {

    soma += vet[i];

  }
   return soma / dia;
}

int main()
{
    float tempAno[4];
    int tam=0,contador=0;

    for (int i = 0; i < 4; i+=1) {

      cout<<"Entre com a temperatura do dia: "<<endl;
      cin>>tempAno[i];
      tam += 1;

    }

     float menorTemp=tempAno[0], maiorTemp=tempAno[0];

     for (int i = 0; i < 4; i+=1) {

       if (menorTemp > tempAno[i]) {

         menorTemp = tempAno[i];

       }
       if (maiorTemp < tempAno[i]) {

         maiorTemp = tempAno[i];

       }
       if (tempAno[i] > mediaAnual(tempAno, tam)) {

         contador += 1;

       }

    }

    cout<<endl<<"A maior temperatura do ano foi: "<<maiorTemp<<endl<<"A menor temperatura do ano foi: "<<menorTemp<<endl;
    cout<<"A media anual das temperaturas: "<<mediaAnual(tempAno, tam)<<endl;
    cout<<contador<<" dias tiveram a temperatura maior que a temperatura anual. "<<endl;

    return 0;
}
