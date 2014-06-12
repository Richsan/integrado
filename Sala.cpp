#include "Sala.h"

int Sala::getNumSala(){

	return numSala;
}
int Sala::getCapacidadeDisponivel(){
	capacidadeDisponivel = 0;

	for(int i = 0; i < qtdeFileiras; i++)
		capacidadeDisponivel+= fila[i]->getQtdeAssentosDisponiveis();

	return capacidadeDisponivel;
}
void Sala::setNumSala(int numSala){

	Sala::numSala = numSala;
}
Fileira Sala::getFileira(char id){

	for(int i = 0; i < qtdeFileiras; i++)
	{
		if(fila[i]->getIdFileira() == id)
			return *fila[i];

	}
	// lançar  exception
}
int Sala::getCapacidade(){
	return capacidade;
}
Sala::Sala(int num, int capacidade, int assentosFileira): qtdeFileiras(capacidade / assentosFileira),numSala(num){
	Sala::capacidade = capacidade;
	Sala::assentosFileira = assentosFileira;

	fila = new Fileira*[qtdeFileiras];
	int i;
	for(i = 0; i < qtdeFileiras; i++)
		fila[i] = new Fileira('A' + i, assentosFileira);

	if(capacidade % assentosFileira > 0)
		fila[i] = new Fileira('A' + i, capacidade % assentosFileira);

	capacidade = qtdeFileiras * fila[0]->getQtdeAssentosDisponiveis();
}
