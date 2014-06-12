#ifndef SESSAO_H
#define SESSAO_H

#include <iostream>
#using std::string;

class Sessao{

//---------Atributos----------------------------------
	private:
		//array de horarios (discutir implementacao)
		int encerrada; //pode ser bool(a decidir)
		int numVendido;
		string filme;

//-----------Metodos------------------------------------
	public:
		void setStatus(int encerrada); // pode ser bool no parametro(decidir)
		int getStatus(); //retorna encerrada
		// array getHorario(); //discutir implementacao
		// void setHorario(array horario); //discutir implementacao
		int getDisponivel(); //pode ser bool, nao sei bem ao certo mas deve verificar se nao esta cheia ou encerrada
		void setNumVendido(int numVendido);
		string getFilme(); //retorna filme
		void setFilme(string nomeFilme);//altera filme


//----------Construtores e Destrutores--------------------------------
	public:
		Sessao(); //decidir depois os parametros
		~Sessao();//provavelmente sera necessario destruir array de horarios

};
#endif