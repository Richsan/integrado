#ifndef FILEIRA_H
#define FILEIRA_H

#include "Assento.h"

class Fileira{

//--------Atributos----------------
	private:
		char idFileira;
		const int qtdeAssentos;
		Assento **assento;
		static int numFileira;


//-------Metodos----------------------

	public:
		bool verificaDisponibilidade();
		Assento getAssento(int id);

//--------Construtores e Desrutores-----------
	public:
		Fileira(char);//definir parametros
};
#endif