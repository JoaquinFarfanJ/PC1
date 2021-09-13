#include <iostream>
#include "type.h"
#include "ListaEnlazada1.h"

using namespace std;
//Si queremos reducir el tamaño de la lista, solo hay que cambiar el nElem y podemos hacerlo más optimizado. 
const int nElem = 20;

int main()
{
  TX vect[nElem] = {5,30,40, 7,80, 90, 3,25, 54,47, 
                  3, 6, 12, 8, 25, 27, 19, 83, 9, 0};
  
  LinkedList<TX> mylist;
  for(auto x=0; x<nElem; x++)
  {
    mylist.insert_at_tail(vect[x]);
    mylist.print(cout);
  }
  cout << endl;

  for(auto x=0; x<nElem; x++)
  {
    TX dato = mylist.PopHead();
    cout <<"dato removido:  " << dato <<endl;
    mylist.print(cout);
  }
}