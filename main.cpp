#include "Sala.h"
#include "ListaSala.h"
#include <iostream>



using namespace std;

int main(){


	Sala s(5);

s.addFileirasComAssentos(5, 10);
s.setQtdeAssentosNaFileira('A', 5);

	cout << s.getQtdAssentosNaFileira('A') << endl;

	s.ocuparAssento('A',2);
	s.desocuparAssento('A',2);

	if(s.verificaDispAssento('A', 2))
		cout << "Sim" << endl;

	cout << s.getNumSala() << s.getCapacidade() << s.getSituacao() << s.getQtdFileiras() << endl;

	//cout << l.getCabeca()->getElemto()->getIdFileira() << endl;
	//cout << l.getCabeca()->getProx()->getElemto()->getIdFileira() << endl;
	//cout << l.getCabeca()->getProx()->getProx()->getElemto()->getIdFileira() << endl;
	//cout << l.getCabeca()->getProx()->getProx()->getProx()->getElemto()->getIdAssento() << endl;




	return 0;
}