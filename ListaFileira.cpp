#include "ListaFileira.h"
#include <iostream>
using namespace std;

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
bool ListaFileira::disponivel(){
	No<Fileira>* temp = getCabeca();

	while(temp != NULL)
	{
		if(temp->getElemto()->verificaDisponibilidade())
			return true;
		temp = temp->getProx();
	}

	return false;
}
int ListaFileira::qtdeFileiraDisponivel(){
	No<Fileira>* temp = getCabeca();
	int qtde = 0;

	while(temp != NULL)
	{
		if(temp->getElemto()->verificaDisponibilidade())
			qtde++;

		temp = temp->getProx();
	}

	return qtde;
}

int ListaFileira::qtdeAssentoDisponivel(){
	No<Fileira>* temp = getCabeca();
	int qtde = 0;

	while(temp != NULL)
	{
		qtde+= temp->getElemto()->getQtdeAssentosDisponiveis();
		temp = temp->getProx();
	}

	return qtde;
}
void ListaFileira::setQtdeAssentos(int qtde){
	No<Fileira> * temp;

	temp = getCabeca();

	while(temp != NULL)
	{
		temp->getElemto()->setQtdeAssentos(qtde);
		temp = temp->getProx();
	}
}

void ListaFileira::desocupaFileiras(){
	No<Fileira> * temp;

	temp = getCabeca();

	while(temp != NULL)
	{
		temp->getElemto()->desocupa();
		temp = temp->getProx();
	}
}
ListaFileira::ListaFileira():Lista<Fileira>(){}
ListaFileira::~ListaFileira(){}