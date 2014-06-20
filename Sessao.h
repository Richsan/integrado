#ifndef SESSAO_H
#define SESSAO_H

#include <iostream>
using std::string;
#include "Sala.h"
#include "Horario.h"

class Sessao{

//---------Atributos----------------------------------
	private:

		bool encerrada;
		int numVendido;
		string filme;
		Sala *sala;
		Horario horario; //horario possui data também

//-----------Metodos------------------------------------
	public:
		void setStatus(bool encerrada); //altera encerrada
		bool getStatus(); //retorna encerrada
		Horario getHorario(); //discutir implementacao
		void setHorario(int hora, int min);
		void setData(int dia, int mes, int ano);
		Data getData();
		bool getDisponivel();
		void setNumVendido(int numVendido);
		string getFilme();
		void setFilme(string nomeFilme);
		Sala * getSala();
		//void alteraSalaSessao(Sala &sal);


//----------Construtores e Destrutores--------------------------------
	public:
		Sessao(string filme, Sala *sal, int dia, int mes, int ano, int hora, int min);
		Sessao(string filme, Sala *sal, int hora, int min); //Com data corrente no sistema
		Sessao(string filme, Sala *sal); //com hora e data corrente no sistema.
		~Sessao();

};
#endif