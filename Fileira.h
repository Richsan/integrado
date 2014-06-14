#ifndef FILEIRA_H
#define FILEIRA_H

#include "ListaAssento.h"


class Fileira{

//--------Atributos----------------
	private:
		char idFileira;
		int qtdeAssentos;
		int assentosDisponiveis;
		ListaAssento assento;
		int num;

	public:
		static int numFileira;


//-------Metodos----------------------

	public:
		bool verificaDisponibilidade();
		Assento *getAssento(int id);
		int getQtdeAssentosDisponiveis();
		void setQtdeAssentos(int qtde);
		char getIdFileira();
		void desocupa();
//--------Construtores e Desrutores-----------
	public:
		Fileira(char id, int qtdAssentosFileira);//definir parametros
		~Fileira();
};
#endif