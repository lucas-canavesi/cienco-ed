#include <iostream>

using namespace std;

int main()
{
    int matrizA[10], x, matrizM[10];


    for (int i = 0; i < 10; i+=1) {

      cout<<"Entre com o numero "<<i+1<<": "<<endl;
      cin>>matrizA[i];

    }

    cout<<endl<<"Entre com um numero: "<<endl;
    cin>>x;
    cout<<endl;

       for (int i = 0; i < 10; i+=1) {

         matrizM[i] = matrizA[i] * x;
         cout<<matrizM[i]<<endl;

        }
    return 0;
}


