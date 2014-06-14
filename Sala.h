#ifndef SALA_H
#define SALA_H

#include "ListaFileira.h"
#include <iostream>

using namespace std;
typedef enum { disponivel = 0, manuEquipamento, reforma, manuGeral}Estado;

class Sala{

//--------Atributos-------------------
	private:
		int numSala;
		int capacidade;
		int capacidadeDisponivel;
		ListaFileira fila;
		int qtdeFileiras;
		int assentosFileira;
		Estado situacao;

//--------Metodos----------------------
	public:
		int getNumSala();
		void setNumSala(int numSala);
		int getCapacidadeDisponivel();
		int getCapacidade();
		void setCapacidade(int qtde);
		int getQtdeAssentosFileiras();
		void setQtdeAssentosFileiras(int qtde);
		Fileira *getFileira(char id);
		void desocupaSala();
		string getSituacao();
		void setSituacao(Estado alteracao);

//--------Construtores e Destrutores-----------------
	public:

		Sala(int num, int capacidade, int assentosFileira);
		~Sala();
};
#endif