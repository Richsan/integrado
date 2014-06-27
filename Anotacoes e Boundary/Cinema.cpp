#include "Cinema.h"
using namespace std;

Cinema::Cinema(){
	telaInicial();
}
Cinema::~Cinema(){}

void Cinema::telaInicial(){
	int opcao;

	do{
		cout << endl;
		cout << "1. Gerenciar salas" << endl;
		cout << "2. Gerenciar sessões" << endl;
		cout << "3. Venda" << endl;
		cout << "4. Sair" << endl;
		cout << "Escolha uma opcao ";
		cin >> opcao;
		cout << endl;

		switch(opcao){
			case 1:
				opcaoSala();
			break;
			case 2:
				opcaoSessao();
			break;
			case 3:
				venderIngresso();
			break;
			case 4:
			break;
			default:
				cout << "Opcao invalida" << endl;
		}

		cout << endl;
	}while(opcao!=4);
	cout << endl ;
}

void Cinema::opcaoSala(){
	int opcao;

	do{
		cout << endl;
		cout << "1. Cadastrar Sala" << endl;
		cout << "2. Editar Sala" << endl;
		cout << "3. Voltar ao Menu Principal" << endl;
		cout << "Escolha uma opcao ";
		cin >> opcao;

		cout << endl;

		switch(opcao){
			case 1:
				cadastrarSala();
			break;
			case 2:
				editarSala();
			break;
			case 3:
			break;
			default:
				cout << "Opcao invalida" << endl;


		}
		cout << endl;
	}while(opcao!=3);
}

void Cinema::cadastrarSala(){
	int numSala;
	int qtdeFileiras;
	int qtdeAssentosFileira;
	int opcao;
	char idFileira;

	cout << "Informe o número da sala: " << endl;
	cin >> numSala;

	//Sala salaTemp(numSala);

	do
	{
		//clear e imprime sala, opções em baixo

		cout << endl;
		cout << "1. Adicionar fileira(s)"<< endl;
		cout << "2. Excluir uma fileira" << endl;
		cout << "3. Alterar numero de assentos de uma fileira" << endl;
		cout << "4. Confirmar" << endl;

		cin >> opcao;

		switch(opcao)
		{
			case 1:
				cout << "Quantidade de fileiras: ";
				cin >> qtdeFileiras;

				cout << "Quantidade de assentos por fileira: " << endl;
				cin >> qtdeAssentosFileira;
				
				//salaTemp.addFileirasComAssentos(qtdeFileiras, qtdeAssentosFileira); // catch(bad_alloc) ?
			break;

			case 2:
				cout << "Informe fileira: " << endl;
				cin >> idFileira;

				//salaTemp.removeFileira(idFileira);
			break;

			case 3:
				cout << "Informe fileira: "<< endl;
				cin >> idFileira;

				cout << "Informe novo número de assentos: " << endl;
				cin >> qtdeAssentosFileira;

				//salaTemp.setQtdeAssentosNaFileira(idFileira, qtdeAssentosFileira)
			break;

			case 4:
			//adiciona na lista
			//caso nao conseguir mostra erro

			break;

			case 5:
			//chama destrutor do temp // delete &salaTemp?
			break;

			default:
				cout << "Opção inválida." << endl;
		}
	}while(opcao != 4 && opcao != 5);
}

void Cinema::editarSala(){
	int opcao;
	int numSala;
	//Sala *salaEscolhida;
	int idFileira, qtdeAssentosFileira;

	do{
		//listarSalasExistentes();

		cout << "Informe o número da sala: " << endl;
		cin >> numSala;

		//salaEscolhida = listaSalas.busca(numSala);

		do{
			//clear e imprime sala, opções em baixo

			cout << endl;
			cout << "1. Alterar número de assentos de uma fileira" << endl;
			cout << "2. Excluir uma fileira" << endl;
			cout << "3. Alterar a situação da sala" << endl;
			cout << "4. Excluir sala" << endl;
			cout << "5. Editar outra sala" << endl;
			cout << "6. Voltar ao menu Sala" << endl;
			cout << "Escolha uma opcao ";
			cin >> opcao;

			cout << endl;

			switch(opcao){
				case 1:
					cout << "Informe fileira: "<< endl;
					cin >> idFileira;

					cout << "Informe novo número de assentos: " << endl;
					cin >> qtdeAssentosFileira;

					//salaEscolhida.setQtdeAssentosNaFileira(idFileira, qtdeAssentosFileira);
				break;

				case 2:
					cout << "Informe fileira: "<< endl;
					cin >> idFileira;

					//salaEscolhida.removeFileira(idFileira);
				break;

				case 3:
					int opcSituacao;
					//Situacao novaSituacao;

					cout << "Situação atual: " << endl; // INFORMAR SITUAÇÃO ATUAL AQUI

					cout << endl << "Opções" << endl;
					cout << " 1. Disponível" << endl;
					cout << " 2. Manutenção de equipamento" << endl;
					cout << " 3. Reforma" << endl;
					cout << " 4. Manutenção geral" << endl;

					cout << endl << "Informe a nova situação da sala: " << endl;
					cin >> opcSituacao;

					/*switch(opcSituacao)
					{
						case 1:
							novaSituacao = disponivel;
						break;

						case 2:
							novaSituacao = manuEquipamento;
						break;

						case 3:
							novaSituacao = reforma;
						break;

						case 4:
							novaSituacao = manuGeral;
						break;
					}*/

					//salaEscolhida.setSituacao(novaSituacao);
				break;

				case 4:
					if(confirmacao())
					{
						//listaSalas.remove(numSala);
						cout << "Sala removida com sucesso." << endl;
					}
					
					else
						opcao = 0;
				break;

				case 5:
				break;

				case 6:
				break;

				default:
					cout << "Opção inválida." << endl;
			}
			cout << endl;
		}while(opcao != 4 && opcao != 5 && opcao != 6);
	}while(opcao != 4 && opcao != 6);
}

void Cinema::opcaoSessao(){
	int opcao;

	do{
		cout << "1. Cadastrar Sessao" << endl;
		cout << "2. Editar Sessao" << endl;
		cout << "3. Voltar ao Menu Principal" << endl;
		cout << "Escolha uma opcao ";
		cin >> opcao;
		cout << endl;

		switch(opcao){
			case 1:
				cadastrarSessao();
			break;
			case 2:
				editarSessao();
			break;
			case 3:
			break;
			default:
				cout << "Opcao invalida" << endl;


		}
	}while(opcao!=3);
}

void Cinema::cadastrarSessao(){
	string filme;
	//horario;
	int codSala;
	bool confirmacao;

	cout << "Informe o nome do filme ";
	cin >> filme;

	cout << endl << "Informe o horario de inicio " << endl;
	//cin >> //horario;

	//listarSalasDisponiveis com base no horario

	cout << endl << "Informe numero da sala na qual deseja cadastrar a sessao" << endl;
	cin >> codSala;

	cout << endl << "Confirme se os dados inseridos estao corretos" << endl;
	cout << "Codigo do filme: " << filme << endl;
	cout << "Horario de inicio: " << 2/*horario*/ << endl;
	cout << "Numero da sala: " << codSala << endl;
	cout << "Digite 1 para confirmar ou 0 para sair" << endl;
	cin >> confirmacao;

	if(confirmacao == 1){
		//chamar construtor;
		cout << endl << "Sessao adicionada a sala: " << codSala << " com sucesso" << endl;
	}

	else
		cout << "Sessao nao foi adicionada" << endl;
}

void Cinema::editarSessao(){
	int opcao;
	int idSessao;
	string filme;

	do{
		cout << "1. Listar Sessoes Existentes" << endl;
		cout << "2. Excluir Sessao" << endl;
		cout << "3. Alterar Horario de Exibicao" << endl;
		cout << "4. Alterar Filme" << endl;
		cout << "5. Voltar ao menu Sessao" << endl;
		cout << "Escolha uma opcao ";
		cin >> opcao;
		cout << endl;
		switch(opcao){
			case 1:
				//listarSessosExistentes(); metodo da lista
			break;

			case 2:
				cout << "Informe numero da Sessao:" << endl;
				cin >> idSessao;
				cout << "Certeza que quer excluir sessao de numero" << idSessao << "?" << endl;
				if(confirmacao())
					cout << "Apaga depois" << endl;
					//busca sessao
					//excluirSessao();
			break;
			case 3:
				cout << "Informe numero da Sessao:" << endl;
				cin >> idSessao;
				int novoHorario;
				cout << "Informe o novo horario da sessao" << endl;
				cin >> novoHorario;
				cout << "Certeza que quer alterar horario da sessao para " << novoHorario << "?" << endl;

				if(confirmacao())
					cout << "Apagar Depois" << endl;
					//Buscar Sessao na lista
					//chamar metodo set e passar novoHorario
			break;
			case 4:
				cout << "Informe numero da Sessao:" << endl;
				cin >> idSessao;
				cout << "Informe o novo filme que sera exibido nessa sessao" << endl;
				cin >> filme;
				cout << "Certeza que quer alterar o filme da sessao para " << filme << "?" << endl;

				if(confirmacao())
					cout << "Apaga Depois" << endl;
					//Busca sessao
					//altera filme
			break;
			case 5:
			break;
			default:
				cout << "Opcao invalida" << endl;
		}
		cout << endl;
	}while(opcao!=5);
}
void Cinema::venderIngresso(){
	int opcao;

	do{
		cout << "1. Listar Sessoes Disponiveis" << endl;
		cout << "2. Iniciar Compra " << endl;
		cout << "3. Voltar ao Menu Principal" << endl;
		cout << "Escolha uma opcao ";
		cin >> opcao;
		cout << endl;

		switch(opcao){
			case 1:
				//listarSessoesDisponiveis();
			break;
			case 2:
				iniciarCompra();
			break;
			case 3:
			break;
			default:
				cout << "Opcao invalida" << endl;


		}
		cout << endl;
	}while(opcao!=3);
}
void Cinema::iniciarCompra(){
	int opcao;
	int codSessao;
	int qtdIngressos;
	int meia=0;
	int numSessao;
	//vai precisar de uma ed pra guardar  ingressos


	do{
		cout << "1. Informar Sessao Desejada" << endl;
		cout << "2. Calcular Valor Total" << endl;
		cout << "3. Confirmar Compra" << endl;
		cout << "4. Cancelar Compra" << endl;
		cout << "5. Voltar ao menu Venda" << endl;
		cout << "Escolha uma opcao ";
		cin >> opcao;
		cout << endl;

		switch(opcao){
			case 1:
				cout << "Informe numero da Sessao Desejada" << endl;
				cin >> numSessao;

				//Lista poltronas e faz um while pra escolher as poltronas e tipo de ingresso
			break;
			case 2:
				//calcularValorTotal(array de ingresso);//metodo da ED
			break;
			case 3:
				//confirmarCompra(int codSessao, int qtdIngressos, int meia);//Metodo da ED
			break;
			case 4:
				//cancelarCompra(int meia); // destruir Ed de ingressos
			break;
			case 5:
			break;
			default:
				cout << "Opcao invalida" << endl;
		}
	}while(opcao!=5);
}

bool Cinema::confirmacao(){
	char confirmacao;

	do
	{
		cout << "Digite s para sim e n para não: " << endl;
		cin >> confirmacao;

		if(confirmacao == 's' || confirmacao == 'S')
		{
			cout << "Operacao concluída;" << endl;
			return true;

		}

		else if(confirmacao == 'n' || confirmacao == 'N')
		{
			cout << "Operacao cancelada;" << endl;
			return false;
		}

		else
			cout << "Entrada inválida!" << endl;
	}while(1);
}