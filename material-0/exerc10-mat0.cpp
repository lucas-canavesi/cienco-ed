#include <iostream>

using namespace std;

int main()
{
    int idade, OP, otimo=0, bom=0, regular=0, ruim=0;
    float totPessoas=0, somaIdade=0;
    while (idade >= 1) {

      cout<< "Entre com a sua idade: "<< endl;
      cin >> idade ;
      somaIdade= somaIdade + idade;
      if (idade > 1) {
        cout <<"Opniao: " << endl;
        cout <<"1 -> Ótimo" << endl;
        cout <<"2 -> Bom" <<endl;
        cout <<"3 -> Regular"<<endl;
        cout <<"4 -> Ruim"<<endl;
        cout<<endl;
        cout <<"Entre com a sua opinião sobre o filme: "<< endl;
        cin >>OP;
        totPessoas+=1;

        switch (OP) {

          case 1:
            otimo +=1;
            break;
          case 2:
            bom +=1;
            break;
          case 3:
            regular +=1;
            break;
          case 4:
            ruim +=1;
            break;
           default:{
             totPessoas-=1;
             somaIdade = somaIdade - idade;
             cout<<"Opcao invalida.Vote novamente!"<<endl;
           }
        }

      cout<<endl;
      cout<<"Total de pessoas que realizaram a pesquisa: "<< totPessoas<<"."<<endl;
      cout<<"Media das idades: "<<somaIdade/totPessoas<<endl;
      cout<<"Pocentagem de resposta Otimo; "<<(otimo * 100)/totPessoas<<" %."<<endl;
      cout<<"Pocentagem de resposta Bom: "<<(bom * 100)/totPessoas<<" %."<<endl;
      cout<<"Pocentagem de resposta Regular: "<<(regular * 100)/totPessoas<<" %."<<endl;
      cout<<"Pocentagem de resposta Ruim: "<<(ruim * 100)/totPessoas<<" %."<<endl;
      cout<<endl;
    }
  }
    return 0;
}
