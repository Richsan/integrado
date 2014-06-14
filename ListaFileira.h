#ifndef LISTAFILEIRA_H
#define LISTAFILEIRA_H

#include "Lista.h"
#include "Fileira.h"


class ListaFileira: public Lista<Fileira>{

//------------Metodos-------------------------
	public:
		Fileira *busca(char id);
		bool disponivel();
		int qtdeFileiraDisponivel();
		int qtdeAssentoDisponivel();
		void setQtdeAssentos(int qtde);
		void desocupaFileiras();


//-------------Construtor e Destrutor--------------
	public:
		ListaFileira();
		~ListaFileira();

};

#endif