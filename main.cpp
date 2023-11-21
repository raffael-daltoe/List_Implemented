#include <iostream>
#include <cstdlib>
using namespace std;

#include "Nodo.h"
#include "ListaSE.h"

int NodosAlocados=0;
Nodo* AlocaNodo(float x, float y)
{
  NodosAlocados ++;
  return new Nodo (x,y);
}

void DestroiNodo(Nodo *n)
{
  delete n;
  NodosAlocados--;
}
int main() {

  ListaSE L1;
  ListaSE *L2;

  L2 = &L1;

  L1.InsereNoInicio(-400);
  L1.InsereNoInicio(122);
  L1.InsereNoFimFAST(20);

  //L1.ImprimeLista();
  L2->ImprimeLista();
  L2->InsereNoInicio(2534);
  L1.RemoveDoFim();
  L1.ImprimeLista();
  L2->ImprimeLista();
  Nodo *aux;
  aux = L1.BuscaDado(-34);
  if (aux != NULL)
    printf("Achou!: %d\n", aux->getInfo());
  else printf("Nao achou!\n");

  L1.ImprimeLista();
  //system("./DesenhaPoligonos PolyTeste.txt");
  

}