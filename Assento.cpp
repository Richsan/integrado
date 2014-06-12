#include "Assento.h"

Assento::Assento(int idAssento, int idFileira){
	Assento::idAssento = idAssento;
	Assento::disponibilidade = true;
	Assento::idFileira = idFileira;
}
bool Assento::verificaDisponibilidade(){

	return disponibilidade;
}
void Assento::ocupaAssento(){
	disponibilidade = false;
}
int Assento::getIdAssento(){

	return idAssento;
}