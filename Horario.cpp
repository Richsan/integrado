#include "Horario.h"
#include <iomanip>

int Horario::getHora(){
	return hora;
}

void Horario::setHora(int hora){
	if(hora >= 0 && hora < 24)
		Horario::hora = hora;
	else
		throw "Hora inválida";

}

int Horario::getMinuto(){
	return minuto;
}

void Horario::setMinuto(int minuto){
	if(minuto >= 0 && minuto < 60)
		Horario::minuto = minuto;
	else
		throw "Minuto inválido";
}
void Horario::imprime(){
	cout << setw(2) << setfill('0') << hora << ":" << setw(2) << setfill('0') << minuto ;
}

void Horario::imprimeComData(){
	Data::imprime();
	cout << " ";
	Horario::imprime();
}
Horario::Horario(int hora, int minuto, int dia, int mes, int ano) : Data(dia, mes, ano)
{
	setHora(hora);
	setMinuto(minuto);
}

Horario::Horario(int hora, int minuto) : Data()
{
	setHora(hora);
	setMinuto(minuto);
}
Horario::Horario():
	Data()
{
	struct tm *local;
	time_t t;
	t= time(NULL);
	local=localtime(&t);

	hora = local->tm_hour;
	minuto = local->tm_min;
}