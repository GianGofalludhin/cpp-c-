#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int angka[]={1,3,5,7,9};
  cout <<"angka="<< angka [2]<<endl;
  char huruf []={'a','i','u','e','o',};
  cout <<"huruf="<<huruf [4]<<endl;
  string nama[]={"algis","osep","amel"};
  cout <<"nama="<<nama[0]<<endl;
  int nilai[3][4]={   
    {80,85},
    {90,92,94,96},
    {75,78,79}
    };
    cout <<"nilai="<<nilai[1][0]<<endl;
}