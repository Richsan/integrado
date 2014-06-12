#include "Fileira.h"

int Fileira::numFileira = -1;

Fileira::Fileira(char id): qtdeAssentos(50), idFileira(id){
	numFileira++;
	assento = new Assento*[qtdeAssentos];
	for(int i= 0; i < qtdeAssentos; i++)
		assento[i] = new Assento(50* numFileira + i + 1,idFileira);
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