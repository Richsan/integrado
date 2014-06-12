#ifndef VENDA_H
#define VENDA_H

#include "Ingresso.h"

class Venda{

//---------Atributos---------------------------------
	private:
		//Date dtVenda; -- aprender como usar tipo date
		float valorTotal;

//--------Metodos------------------------------------
	public:
		float calcularValorTotal();
		//void emitirIngresso(array ingresso); verificar como e que vai usar esse array parametro
		void addIngresso(Ingresso ingresso);//verificar se vai usar referencia ou assim mesmo
		void removeIngresso(Ingresso ingresso; //o mesmo de add

//------Construtores e Destrutores--------------------------
	public:

		Venda(); //Definir parametros
		//se necessario, adicionar destrutor
};
#endif