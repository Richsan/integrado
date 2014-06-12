#include "Fileira.h"

int Fileira::numFileira = -1;

Fileira::Fileira(char id, int qtdAssentosFileira): qtdeAssentos(qtdAssentosFileira), idFileira(id){
	numFileira++;
	assento = new Assento*[qtdeAssentos];
	for(int i= 0; i < qtdeAssentos; i++)
		assento[i] = new Assento(qtdeAssentos* numFileira + i + 1,idFileira);
}
const int Fileira::getQtdeAssentosDisponiveis(){
	assentosDisponiveis = 0;

	for(int i = 0; i < qtdeAssentos; i++)
		if(assento[i]->verificaDisponibilidade())
			assentosDisponiveis++;

	return assentosDisponiveis;
}
bool Fileira::verificaDisponibilidade(){

	for(int i= 0; i < qtdeAssentos; i++)
		if (assento[i]->verificaDisponibilidade())
			return true;

	return false;


}
Assento Fileira::getAssento(int id){
	for(int i = 0; i < qtdeAssentos; i++)
	{
		if(assento[i]->getIdAssento() == id)
			return *assento[i];

	}
	//lancar excessao
}
char Fileira::getIdFileira(){
	return idFileira;
}