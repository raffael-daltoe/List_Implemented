
#ifndef _NODO
#define _NODO
// ****************************
class Nodo{
public:
  float x,y;
  int info;
  Nodo *prox;
  Nodo *prev;

  Nodo();
  Nodo (float x, float y);
  void setInfo(int i); 
  int getInfo();
  void setProx(Nodo *p);
  Nodo* getProx();
  void setPrev(Nodo *p);
  Nodo* getPrev();

};

#endif 