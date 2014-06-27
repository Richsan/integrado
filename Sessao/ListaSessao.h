#ifndef LISTASESSAO_H
#define LISTASESSAO_H

#include "Sessao.h"
#include "Lista.h"

class ListaSessao: public Lista<Sessao>{

//--------------Metodos---------------------------------

	public:

		//lembrar que ele herda os metodos de Lista.h: inserir (que insere no fim) , remove(remove do fim)
		//qtdeElementos( retorna qtos elementos tem a lista), getCabeca(retorna cabeca)

		Sessao * busca (int id);// retorna sessao
		void removeSessao(int id); // remove sessao com id do parametro
		void insereOrdenado(Sessao *s);

		//-------------Construtor e Destrutor--------------------

	public:
		ListaSessao();
		~ListaSessao();

};


#endif