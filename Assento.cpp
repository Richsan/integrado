#include "Assento.h"

Assento::Assento(char idFileira, int idAssento)
{
	Assento::idFileira = idFileira;
	Assento::idAssento = idAssento;
	Assento::disponibilidade = true;
}

bool Assento::verificaDisponibilidade()
{
	return disponibilidade;
}

void Assento::ocuparAssento()
{
	disponibilidade = false;
}

void Assento::desocuparAssento()
{
	disponibilidade = true;
}

int Assento::getIdAssento()
{
	return idAssento;
}
char Assento::getIdFileira(){
	return idFileira;
}