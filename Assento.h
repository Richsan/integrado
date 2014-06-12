#ifndef ASSENTO_H
#define ASSENTO_H

class Assento{

//---------Atributos-----------------
	private:
		int idAssento;
		bool disponibilidade;
		char idFileira;

//---------Metodos----------------------
	public:
		bool verificaDisponibilidade();
		int getIdAssento();
		void ocupaAssento();

//---------Construtores e Destrutores------------------
	public:
		Assento(int, int); //Definir parametros
};
#endif