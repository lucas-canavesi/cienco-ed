#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int matriz[20];

    for (int i = 0;i < 20; i += 1){

      cout<<"Entre com o numero "<<i+1<<" :"<<endl;
      cin>>matriz[i];

    }

    cout<<endl;

     for (int i = 0;i < 20; i += 1){

       cout<<matriz[i]<<" ";

    }

    cout<<endl;

    reverse(matriz, matriz + 20);

    cout<<"Matriz invertida: "<<endl;

    for (int i = 0; i < 20; i += 1){

      cout<<matriz[i]<<" ";

    }


    return 0;
}
