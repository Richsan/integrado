#include "ListaSessao.h"

Sessao * ListaSessao::busca (int id){
	No<Sessao>* temp = getCabeca();

	while(temp != NULL)
	{
		if(temp->getElemto()->getCodSessao() == id)
			return temp->getElemto();
		temp = temp->getProx();
	}

	throw "Sessao nao encontrada";
}
void ListaSessao::removeSessao(int id){
	No<Sessao>* temp = getCabeca();
	No<Sessao>* excluido;

	if(temp == NULL)
	{
		throw "Lista Vazia , impossivel remover";
	}
	//Caso de remover quando só tem um elemento
	if(temp->getProx() == NULL)
	{
		if(temp->getElemto()->getCodSessao() == id)
		{
			remove();
			return;
		}
		else
			throw "Elemento nao encontrado";

	}
	if(temp->getElemto()->getCodSessao() == id)
	{
		excluido = getCabeca();
		setCabeca(temp->getProx());
		delete excluido;
		return;
	}
	while(temp->getProx() != NULL)
	{
		if(temp->getProx()->getElemto()->getCodSessao() == id)
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
void ListaSessao::insereOrdenado(Sessao *s){
No<Sessao>* temp = getCabeca(), *aux;
	Sessao* add;


	if(temp == NULL)
	{
		insere(s);
		return;
	}
	//Caso de inserir quando só tem um elemento
	if(temp->getProx() == NULL)
	{
		if(*(temp->getElemto()) > *(s)
		{
			add = temp->getElemto();
			temp->setElemto(s);
			temp->setProx(new No<Sessao>(add));
		}
		else
			temp->setProx(new No<Sessao>(s));

		return;

	}
	if(*(temp->getElemto()) > *(s))
	{

		setCabeca(new No<Sessao>(s));

		getCabeca()->setProx(temp);
		return;
	}

	while(temp->getProx() != NULL)
	{
		if(*(temp->getProx()->getElemto()) > *(s))
		{
			aux = temp->getProx();
			temp->setProx(new No<Sessao>(s));
			temp->getProx()->setProx(aux);

			return;
		}

		temp = temp->getProx();
	}

	temp->setProx(new No<Sessao>(s));


}
ListaSessao::ListaSessao():
	Lista()
{}
ListaSessao::~ListaSessao()
{}