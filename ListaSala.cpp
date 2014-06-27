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

void ListaSala::removerSala(int num){
	No<Sala>* temp = getCabeca();
	No<Sala>* excluido;

	if(temp == NULL)
	{
		throw "Lista Vazia , impossivel remover";
	}
	//Caso de remover quando só tem um elemento
	if(temp->getProx() == NULL)
	{
		if(temp->getElemto()->getNumSala() == num)
		{
			remove();
			return;
		}
		else
			throw "Elemento nao encontrado";

	}
	if(temp->getElemto()->getNumSala() == num)
	{
		excluido = getCabeca();
		setCabeca(temp->getProx());
		delete excluido;
		return;
	}
	while(temp->getProx() != NULL)
	{
		if(temp->getProx()->getElemto()->getNumSala() == num)
		{
			excluido = temp->getProx();
			temp->setProx(temp->getProx()->getProx());

			delete excluido;
			return;
		}

		temp = temp->getProx();
	}

	throw "Elemento nao encontrado";

}

ListaSala::ListaSala():Lista(){}