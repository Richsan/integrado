#ifndef LISTASALA_H
#define LISTASALA_H

#include "Lista.h"
#include "Sala.h"

class ListaSala: public Lista<Sala>{

//--------------Metodos---------------------------------

	public:
		Sala *busca(int num);
		void removerSala(int num);

//-------------Construtor e Destrutor--------------------

	public:
		ListaSala();

};
#endif