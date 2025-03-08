#include <iostream>

using namespace std;

int main()
{
    for (int i=1; i<=500; i+=1) {
      if (i % 5 == 0) {
        cout<< i << endl;
      }
    }
    return 0;
}
