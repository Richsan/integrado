#ifndef INGRESSO_H
#define INGRESSO_H

class Ingresso {

//----------Atributos-----------------------------
	private:
		//Date dataIngresso; - Ver como usar tipo date
		float valor;

//----------Metodos--------------------------------
	public:
		//Date getDtIngresso(); -- ver como usar tipo date
		float getVAlor();
		//void setDtIngresso(Date dtIngresso); -- ver como usar tipo date
		void setValor(float valor);

//----------Construtores e Destrutores-----------------------
	public:
		Ingresso(); // definir parametros depois
		//adicionar destrutor, se necessário
};
#endif