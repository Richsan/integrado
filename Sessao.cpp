#include "Sessao.h"

void Sessao::setStatus(bool encerrada){
	Sessao::encerrada = encerrada;
}
bool Sessao::getStatus(){
	return encerrada;
}
bool Sessao::getDisponivel(){
	if(numVendido <= sala->getCapacidade()) //verificar horario depois aqui também
		return true;

	return false;
}
void Sessao::setNumVendido(int numVendido){
	Sessao::numVendido = numVendido;
}

string Sessao::getFilme(){
	return filme;
}
void Sessao::setFilme(string nomeFilme){
	Sessao::filme = filme;
}
Sala * Sessao::getSala(){
	return sala;
}
Horario Sessao::getHorario(){
	return horario;
}
void Sessao::setHorario(int hora, int min){
	horario.setHora(hora);
	horario.setMinuto(min);
}
void Sessao::setData(int dia, int mes, int ano){
	horario.setDia(dia);
	horario.setMes(mes);
	horario.setAno(ano);
}
Data Sessao::getData(){
	return Data(horario.getDia(), horario.getMes(), horario.getAno());
}


Sessao::Sessao(string filme, Sala *sal):horario(){
	Sessao::filme = filme;
	sala = sal;
	sala->setSituacao(emSessao);
}

Sessao::Sessao(string filme, Sala *sal, int dia, int mes, int ano, int hora, int min):
 horario(hora,min,dia,mes,ano)

{
	Sessao::filme = filme;
	sala = sal;
	sala->setSituacao(emSessao);
}
Sessao::Sessao(string filme, Sala *sal, int hora, int min):
 horario(hora, min)
{
	Sessao::filme = filme;
	sala = sal;
	sala->setSituacao(emSessao);
}
Sessao::~Sessao(){
	sala->desocupaSala();
	sala->setSituacao(disponivel);

}