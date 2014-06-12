#ifndef SALA_H
#define SALA_H

class Sala{

//--------Atributos-------------------
	private:
		int numSala;
		int capacidade;

//--------Metodos----------------------
	public:
		int getNumSala();
		int getCapacidade();
		void setNumSala(int numSala);
		void setCapacidade(int capacidade);
//--------Construtores e Destrutores-----------------
	public:

		Sala(); //Definir parametros depois
		//se necessario, incluir destrutor

};
#endif