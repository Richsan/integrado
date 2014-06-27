#include "Data.h"
#include <iomanip>

const string Data::textoMes[12] = {"janeiro", "fevereiro", "março", "abril", "maio",
										 "junho", "julho", "agosto", "setembro", "outubro",
										 "novembro", "dezembro"};

int Data::getDia(){
	return dia;
}
void Data::setDia(int dia){
	if(dia > 0 && dia < 32)
		Data::dia = dia;
	else
		throw "Dia invalido";
}
int Data::getMes(){
	return mes;
}
string Data::getStringMes(){
	return textoMes[mes - 1];
}
void Data::setMes(int mes){
	if(mes > 0 && mes < 13)
		Data::mes = mes;
	else
		throw "Mes invalido";
}
int Data::getAno(){
	return ano;
}
void Data::setAno(int ano){
	if(ano > 0)
		Data::ano = ano;
	else
		throw "Ano invalido";
}
void Data::imprime(){
	cout << setw(2) << setfill('0') << dia << "/" << setw(2) << setfill('0') << mes << "/" << ano;
}

Data::Data(int dia, int mes, int ano)
{
	setDia(dia);
	setMes(mes);
	setAno(ano);
}

Data::Data(){
	struct tm *local;
	time_t t;
	t= time(NULL);
	local=localtime(&t);

	dia = local->tm_mday;
	mes = local->tm_mon + 1;
	ano = local->tm_year + 1900;
}