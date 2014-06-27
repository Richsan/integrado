#include "ListaAssento.h"

Assento *ListaAssento::busca(int id){
	No<Assento>* temp = getCabeca();

	while(temp != NULL)
	{
		if(temp->getElemto()->getIdAssento() == id)
			return temp->getElemto();

		temp = temp->getProx();
	}

	throw "Assento nao encontrado";
}

ListaAssento::ListaAssento():Lista(){}
ListaAssento::~ListaAssento(){}
