
#include "Nodo.h"
  Nodo::Nodo()
  {

  }
  Nodo::Nodo(float x, float y)
  {
    
  }
  void Nodo::setInfo(int i) { 
    info = i; 
  }
  int Nodo::getInfo() { 
    return info;
  }
  void Nodo::setProx(Nodo *p){
    prox = p;
  }
  Nodo* Nodo::getProx(){
    return prox;
  }
  void Nodo::setPrev(Nodo *p)
  {
    prev = p;
  }
  Nodo* Nodo::getPrev()
  {
    return prev;
  }