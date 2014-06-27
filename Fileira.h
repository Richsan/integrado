#ifndef FILEIRA_H
#define FILEIRA_H

#include "ListaAssento.h"

class Fileira
{
private:
	int qtdeAssentos;
	char idFileira;
	ListaAssento listaAssentos;
public:
	Fileira(char id, int qtdAssentosFileira);
	~Fileira();

	bool verificaDispAssento(int assento);

	void ocuparAssento(int num);
	void desocuparAssento(int num);

	int getQtdeAssentos();
	void setQtdeAssentos(int novaQtde);

	char getIdFileira();
};

#endif