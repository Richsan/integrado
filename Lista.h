#ifndef LISTA_H
#define LISTA_H

#include <iostream>

template <class Tipo>

class No{

//-----Atributos-----------------------
	private:
	Tipo *elemto;
	No<Tipo> * prox;

//-----------------Metodos-----------------------------------
	public:
	Tipo * getElemto(){
		return No::elemto;
	}

	void setElemto(Tipo * elemto){
		No::elemto = elemto;
	}

	No * getProx(){
		return No::prox;
	}
	void setProx(No * set){
		No::prox = set;
	}


//------------------Construtor e Destrutor---------------------------------

	No(Tipo * elemento ){
		No::elemto = elemento;
		prox = NULL;
	}

	~No(){

		delete No::elemto;
	}


};
template <class Tipo>
class Lista{

//----------Atributos---------------------------------------------
	private:
	No<Tipo> *cabeca;


//-------------------Metodos --------------------------------------

	public:
		No<Tipo> * getCabeca(){
			return Lista::cabeca;
		}
		void setCabeca(No<Tipo> * no){
			Lista::cabeca = no;
		}

		void insere(Tipo *elemento){
			No<Tipo>* temp = cabeca;
			if(temp == NULL)
			{
				cabeca = new No<Tipo>(elemento);
				return;
			}
			while(temp->getProx() != NULL)
				temp = temp->getProx();

			temp->setProx(new No<Tipo>(elemento));

		}


	void remove(){
		No<Tipo>* temp = Lista<Tipo>::cabeca;



		if(temp == NULL)
			throw "Impossível remover, lista Vazia!";

		if(temp->getProx() == NULL)
		{
			delete temp;
			Lista::cabeca = NULL;
			return;
		}
		while(temp->getProx()->getProx() != NULL)
			temp = temp->getProx();

		No<Tipo>* aux = temp->getProx();
		temp->setProx(NULL);

		delete aux;
	}

	int qtdeElementos(){
		No<Tipo>* temp = Lista::cabeca;
		int qtde = 0;

		while(temp != NULL)
		{
			qtde++;
			temp = temp->getProx();
		}

		return qtde;

	}



//-----------------Construtor e Destrutor------------------------------
	public:

		Lista(){

			Lista::cabeca = NULL;

		}
		~Lista(){


			while(Lista::cabeca != NULL)
			{
				Lista::remove();
			}

		}

};
#endif