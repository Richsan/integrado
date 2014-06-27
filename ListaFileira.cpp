#include "ListaFileira.h"

Fileira *ListaFileira::busca(char id){
	No<Fileira>* temp = getCabeca();

	while(temp != NULL)
	{
		if(temp->getElemto()->getIdFileira() == id)
			return temp->getElemto();

		temp = temp->getProx();
	}

	throw "Fileira nao encontrada";
}
void ListaFileira::removeFileira(char id){

	No<Fileira>* temp = getCabeca();
	No<Fileira>* excluido;

	if(temp == NULL)
	{
		throw "Lista Vazia , impossivel remover";
	}
	//Caso de remover quando só tem um elemento
	if(temp->getProx() == NULL)
	{
		if(temp->getElemto()->getIdFileira() == id)
		{
			remove();
			return;
		}
		else
			throw "Elemento nao encontrado";

	}
	if(temp->getElemto()->getIdFileira() == id)
	{
		excluido = getCabeca();
		setCabeca(temp->getProx());
		delete excluido;
		return;
	}
	while(temp->getProx() != NULL)
	{
		if(temp->getProx()->getElemto()->getIdFileira() == id)
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
int ListaFileira::getQtdeAssentos(){

	No<Fileira>* temp = getCabeca();
	int qtde = 0;

	while(temp != NULL)
	{
		qtde += temp->getElemto()->getQtdeAssentos();

		temp = temp->getProx();
	}

	return qtde;
}


int ListaFileira::getQtdeFileiras(){

	No<Fileira>* temp = getCabeca();
	int qtde = 0;

	while(temp != NULL)
	{
		qtde++;

		temp = temp->getProx();
	}

	return qtde;
}
ListaFileira::ListaFileira():Lista<Fileira>(){}
ListaFileira::~ListaFileira(){}