#include "ListaSala.h"

Sala *ListaSala::busca(int num){
	No<Sala>* temp = getCabeca();

	while(temp != NULL)
	{
		if(temp->getElemto()->getNumSala() == num)
			return temp->getElemto();
		temp = temp->getProx();
	}

	throw "Elemento nao encontrado";
}

ListaSala::ListaSala():Lista(){}