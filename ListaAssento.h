#ifndef LISTAASSENTO_H
#define LISTAASSENTO_H

#include "Lista.h"
#include "Assento.h"


class ListaAssento: public Lista<Assento>{

//--------------Metodos---------------------------------

	public:
		Assento *busca(int id);
		int qtdeDisponivel();
		int getQtdeAssentos();
		void desocupaAssentos();

//-------------Construtor e Destrutor--------------------

	public:
		ListaAssento();
		~ListaAssento();

};
#endif