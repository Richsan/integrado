#include "Fileira.h"

int Fileira::numFileira = -1;

Fileira::Fileira(char id, int qtdAssentosFileira): qtdeAssentos(qtdAssentosFileira), idFileira(id){
	numFileira++;
	num = numFileira;
	Assento *temporario;

	for(int i= 0; i < qtdeAssentos; i++)
	{
		temporario = new Assento(qtdeAssentos* numFileira + i + 1,idFileira);
		assento.insere(temporario);
	}
}
int Fileira::getQtdeAssentosDisponiveis(){
	assentosDisponiveis = assento.qtdeDisponivel();

	return assentosDisponiveis;
}
bool Fileira::verificaDisponibilidade(){

		if(getQtdeAssentosDisponiveis() > 0)
			return true;

	return false;


}
Assento *Fileira::getAssento(int id){
	Assento * busca = assento.busca(id);
	return busca;
}
char Fileira::getIdFileira(){
	return idFileira;
}
void Fileira::setQtdeAssentos(int qtde){
	int diferenca = qtde - qtdeAssentos;


	if(diferenca > 0)
	{
		Assento *temporario;
		for(int i = 0; i < diferenca; i++)
		{
			temporario = new Assento(qtdeAssentos * num + qtdeAssentos + i + 1,idFileira);
			assento.insere(temporario);
		}
	}

	else
	{
		diferenca = -1 * diferenca;

		for(int i = 0; i < diferenca; i++)
			assento.remove();
	}

	qtdeAssentos = qtde;
}
void Fileira::desocupa(){
	assento.desocupaAssentos();
}
Fileira::~Fileira(){}