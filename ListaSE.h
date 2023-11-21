

#include "Nodo.h"

#ifndef _LISTASE
#define _LISTASE

// ****************************
// Lista Simplesmente Encadeada
class ListaSE{ 
  Nodo *Inicio;
  Nodo *Fim;
public:
  ListaSE();
  void ImprimeLista();
  int InsereNoInicio(int dado);
  int InsereNoFim(int dado);
  int InsereNoFimFAST(int dado);
  int RemoveDoInicio();
  int RemoveDoFim();
  Nodo* BuscaDado(int dado);
  int RemoveDado(int dado);

};

#endif
