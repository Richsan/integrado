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
int ListaAssento::qtdeDisponivel(){
	No<Assento>* temp = getCabeca();
	int qtde = 0;
	while(temp != NULL)
	{
		if(temp->getElemto()->verificaDisponibilidade())
			qtde++;
		temp = temp->getProx();
	}

	return qtde;
}
int ListaAssento::getQtdeAssentos(){
	int qtde = 0;
	No<Assento>* temp = getCabeca();

	while(temp != NULL)
	{
		qtde++;
		temp = temp->getProx();
	}

	return qtde;
}

void ListaAssento::desocupaAssentos(){
	No<Assento> * temp;
	temp = getCabeca();

	while(temp != NULL)
	{
		temp->getElemto()->desocupaAssento();
		temp = temp->getProx();
	}
}

ListaAssento::ListaAssento():Lista(){}

ListaAssento::~ListaAssento(){}
