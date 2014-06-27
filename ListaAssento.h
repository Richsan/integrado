#ifndef LISTAASSENTO_H
#define LISTAASSENTO_H

#include "Lista.h"
#include "Assento.h"


class ListaAssento: public Lista<Assento>
{
public:
	ListaAssento();
	~ListaAssento();

	Assento *busca(int id);
};

#endif