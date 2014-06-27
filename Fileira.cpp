#include "Fileira.h"

Fileira::Fileira(char id, int qtdAssentosFileira): idFileira(id), qtdeAssentos(qtdAssentosFileira)
{
	Assento *temporario;

	for(int i = 0; i < qtdeAssentos; i++)
	{
		temporario = new Assento(idFileira, i + 1);
		listaAssentos.insere(temporario);
	}
}

Fileira::~Fileira(){}

bool Fileira::verificaDispAssento(int assento)
{
	return listaAssentos.busca(assento)->verificaDisponibilidade();
}

void Fileira::ocuparAssento(int num)
{
	listaAssentos.busca(num)->ocuparAssento();
}

void Fileira::desocuparAssento(int num)
{
	listaAssentos.busca(num)->desocuparAssento();
}

char Fileira::getIdFileira(){
	return idFileira;
}

int Fileira::getQtdeAssentos()
{
	listaAssentos.qtdeElementos();
}

void Fileira::setQtdeAssentos(int novaQtde){
	int diferenca = novaQtde - qtdeAssentos;


	if(diferenca > 0)
	{
		Assento *temporario;
		for(int i = 0; i < diferenca + qtdeAssentos; i++)
		{
			temporario = new Assento(idFileira, i + 1);
			listaAssentos.insere(temporario);
		}
	}

	else
	{
		diferenca = -1 * diferenca;

		for(int i = 0; i < diferenca; i++)
			listaAssentos.remove();
	}

	qtdeAssentos = novaQtde;
}
