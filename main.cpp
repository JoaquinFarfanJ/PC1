#include <iostream>
#include "type.h"
#include "stack.h"
#include "linkedlist.h"
#include "operators.h"

using namespace std;


int main() {
  Stack<TX> stack;
  T2 decimal;
  short binario[8];

  cout<<"Ingrese el valor en decimal a convertir"<<endl;
  cin>> decimal;
  if(decimal>0){
  for(auto i=0;i<8;i++)
  {
    binario[i]=decimal % 2;
    decimal /=2;
  }
  cout <<"El numero en binario es: " <<endl;
  for(auto i=7;i>=0;i--)
  {
    stack.push(binario[i]);
    cout<<binario[i];
    auto y = stack.pop();
    cout << y <<endl;
  }
  cout<<endl;

  }
  cout<<"Ingrese un numero en decimal positivo"<<endl;
}