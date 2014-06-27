#include "Sessao.h"

int Sessao::getCodSessao()
{
	return codSessao;
}

void Sessao::setCodSessao(int novoCod)
{
	codSessao = novoCod;
}

bool Sessao::getStatus(){
	return encerrada;
}

void Sessao::setStatus(bool encerrada){
	Sessao::encerrada = encerrada;
}

Horario Sessao::getHorario(){
	return horario;
}

void Sessao::setHorario(Horario novoHorario){
	horario = novoHorario;
}

bool Sessao::getDisponivel(){
	if(numVendido < sala->getCapacidade() && getStatus() == false) //verificar horario depois aqui também
		return true;

	return false;
}

void Sessao::setNumVendido(int numVendido){
	Sessao::numVendido += numVendido;
}

string Sessao::getFilme(){
	return filme;
}

void Sessao::setFilme(string nomeFilme){
	Sessao::filme = filme;
}

Sessao::Sessao(string filme, Sala *sal, Horario h) : horario(h)
{
	if(sala->getSituacao() != disponivel)
		throw "Sala indisponivel"

	Sessao::filme = filme;
	sala = sal;
}