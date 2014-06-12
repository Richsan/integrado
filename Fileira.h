#ifndef FILEIRA_H
#define FILEIRA_H

#include "Assento.h"

class Fileira{

//--------Atributos----------------
	private:
		char idFileira;
		const int qtdeAssentos;
		int assentosDisponiveis;
		Assento **assento;
		static int numFileira;


//-------Metodos----------------------

	public:
		bool verificaDisponibilidade();
		Assento getAssento(int id);
		const int getQtdeAssentosDisponiveis();
		char getIdFileira();
//--------Construtores e Desrutores-----------
	public:
		Fileira(char, int);//definir parametros
};
#endif