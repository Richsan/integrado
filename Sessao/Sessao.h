#ifndef SESSAO_H
#define SESSAO_H

#include <iostream>
using std::string;
#include "Sala.h"
#include "Horario.h"

class Sessao
{
private:
	int codSessao;
	Horario horarioInicio; //horario possui data também
	Horario horarioFim;
	bool encerrada;
	int numVendido;
	string filme;
	Sala *sala;

public:
	Sessao(string filme, Sala *sal, Horario h);

	int getCodSessao();
	void setCodSessao(int novoCod);

	bool getStatus(); //retorna encerrada
	void setStatus(bool encerrada); //altera encerrada

	Horario getHorario(); //discutir implementacao
	void setHorario(Horario novoHorario);

	bool getDisponivel();

	void setNumVendido(int numVendido);

	string getFilme();
	void setFilme(string nomeFilme);
};

#endif