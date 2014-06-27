#ifndef ASSENTO_H
#define ASSENTO_H

class Assento
{
private:
	char idFileira;
	int idAssento;
	bool disponibilidade;

public:
	Assento(char idFileira, int idAssento);

	int getIdAssento();
	char getIdFileira();

	bool verificaDisponibilidade();

	void ocuparAssento();
	void desocuparAssento();
};

#endif