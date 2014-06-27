#ifndef LISTAFILEIRA_H
#define LISTAFILEIRA_H

#include "Lista.h"
#include "Fileira.h"


class ListaFileira: public Lista<Fileira>
{
public:
	ListaFileira();
	~ListaFileira();

	void removeFileira(char id);
	int getQtdeAssentos();
	int getQtdeFileiras();

	Fileira *busca(char id);
};

#endif