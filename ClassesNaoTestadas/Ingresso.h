#ifndef INGRESSO_H
#define INGRESSO_H

#include "Sessao.h"

typedef enum {inteiro = 0, meia} Tipo;

class Ingresso
{
private:
	int codIngresso;
	Horario dtIngresso;
	double valor;
	Tipo tipo;
	Sessao *sessao;
	Assento *assento;
public:
	Ingresso(Sessao &sessao, Assento &assento);

	int getCodIngresso();
	void setCodIngresso(int novoCod);

	Horario getDtIngresso();
	void setDtIngresso(Horario dtIngresso);

	double getValor();
	void setValor(double valor);

	Tipo getTipo();
	void setTipo(Tipo novoTipo);
};

#endif