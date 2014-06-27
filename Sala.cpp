#include "Sala.h"

Sala::Sala(int num) : listaFileiras()
{
	numSala = num;
	capacidade = 0;
	situacao = disponivel;
}

Sala::~Sala(){}

int Sala::getNumSala(){

	return numSala;
}

void Sala::setNumSala(int numSala)
{

	Sala::numSala = numSala;
}

int Sala::getCapacidade()
{
	return capacidade;
}

void Sala::setCapacidade(int novaCap)
{
	capacidade = novaCap;
}

Situacao Sala::getSituacao()
{
	return situacao;
}

void Sala::setSituacao(Situacao alteracao)
{
	if(alteracao >= 0 && alteracao < 4)
		situacao = alteracao;

	else
		throw "Situacao invalida";
}

int Sala::getQtdFileiras()
{
	listaFileiras.qtdeElementos();
}

void Sala::addFileirasComAssentos(int qtdeFileiras, int assentosPorFileira)
{
	Fileira *temp;

	for(int i = 0; i < qtdeFileiras; i++)
	{
		temp = new Fileira('@' + getQtdFileiras() + 1, assentosPorFileira);

		listaFileiras.insere(temp);
	}

	setCapacidade(getCapacidade() + qtdeFileiras * assentosPorFileira);
}

void Sala::removeFileira(char fileira)
{

}

int Sala::getQtdAssentosNaFileira(char fileira)
{
	listaFileiras.busca(fileira)->getQtdeAssentos();
}

void Sala::setQtdeAssentosNaFileira(char fileira, int novaQtde)
{
	listaFileiras.busca(fileira)->setQtdeAssentos(novaQtde);
	//Se quiser atualizar Capacidade, descomenta abaixo:
	//capacidade = listaFileiras.getQtdeAssentos();
}

bool Sala::verificaDispAssento(char fileira, int assento)
{
	listaFileiras.busca(fileira)->verificaDispAssento(assento);
}

void Sala::ocuparAssento(char fileira, int assento)
{
	listaFileiras.busca(fileira)->ocuparAssento(assento);
}

void Sala::desocuparAssento(char fileira, int assento)
{
	listaFileiras.busca(fileira)->desocuparAssento(assento);
}