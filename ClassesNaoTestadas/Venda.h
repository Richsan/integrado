#ifndef VENDA_H
#define VENDA_H

#include "Ingresso.h"
#include "ListaIngresso.h"

class Venda
{
private:
	int codVenda;
	Horario dtVenda;
	float valorTotal;
	ListaIngresso lista;

public:
	Venda(); //Definir parametros //se necessario, adicionar destrutor

	int getCodVenda();
	void setCodVenda(int novoCod);

	float calcularValorTotal();
	//void emitirIngresso(array ingresso); verificar como e que vai usar esse array parametro
	void addIngresso(Ingresso ingresso);//verificar se vai usar referencia ou assim mesmo
	void removeIngresso(Ingresso ingresso); //o mesmo de add
};

#endif