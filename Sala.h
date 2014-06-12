#ifndef SALA_H
#define SALA_H

#include "Fileira.h"

class Sala{

//--------Atributos-------------------
	private:
		int numSala;
		int capacidade;
		int capacidadeDisponivel;
		Fileira **fila;
		int qtdeFileiras;
		int assentosFileira;

//--------Metodos----------------------
	public:
		int getNumSala();
		int getCapacidadeDisponivel();
		int getCapacidade();
		void setNumSala(int numSala);
		Fileira getFileira(char id);
//--------Construtores e Destrutores-----------------
	public:

		Sala(int num, int capacidade, int assentosFileria); //Definir parametros depois
		//se necessario, incluir destrutor

};
#endif