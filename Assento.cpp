#include "Assento.h"

Assento::Assento(int idAssento, char idFileira){
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
void Assento::desocupaAssento(){
	disponibilidade = true;
}
int Assento::getIdAssento(){

	return idAssento;
}
Assento::~Assento(){}