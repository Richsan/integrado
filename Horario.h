#ifndef HORARIO_H
#define HORARIO_H

#include "Data.h"

class Horario: public Data{


//---------Atributos----------------------------------
	private:
		int hora, minuto;

//-----------Metodos------------------------------------
	public:
		int getHora();
		void setHora(int hora);
		int getMinuto();
		void setMinuto(int minuto);
		void imprime(); //imprime horario no formato h:m
		void imprimeComData();//imprime Data e horario no formato d/m/a h:m

//----------Construtores e Destrutores--------------------------------
	public:
		Horario(int hora, int minuto, int dia, int mes, int ano);//Com Horario e data informados
		Horario(int hora, int minuto); //Com data do sistema
		Horario(); // Horario e Data do sistema
};

#endif