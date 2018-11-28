#include <iostream>

using namespace std;

int menuPrincipal();

int menuCadastro(){

	int op;

	while(op != 3 || op != 4){

		cout << "\n\t\t\t\t\tSelecione quem deseja cadastrar:\n" << endl;
		cout << "\t\t\t\t\t1 -> Professor\n" << endl;
		cout << "\t\t\t\t\t2 -> Demais funcionarios\n" << endl;
		cout << "\t\t\t\t\t3 -> Aluno\n" << endl;
		cout << "\t\t\t\t\t4 -> Retornar ao menu anterior\n" << endl;
		cout << "\t\t\t\t\t5 -> Sair do Programa.\n" << endl;
		cout << "\t\t\t\t\tOpcao -> ";
		cin >> op;

		system("clear");
		
		switch(op){
			
			case 1:
			{
				
				Professor prof;

				string nome;
				int idade;
				string sexo;
				string telefone;
				string email;
				string cpf;
				string curso;
				double salario;				

				ofstream ofs("arquivo-professor.txt", fstream::app);

				cout << "\n\t\t\tPreencha os campos abaixo para cadastrar o professor :\n";

				cout << "\n\t\t\tDigite o nome do Professor: ";
				cin.ignore();
				getline(cin,nome);
				
				cout << "\n\t\t\tInforme a idade do Professor: ";
				cin >> idade;
				
				cout << "\n\t\t\tInforme o sexo do Professor: ";
				cin.ignore();
				getline(cin,sexo);
				
				cout << "\n\t\t\tInforme o telefone do Professor: ";
				getline(cin,telefone);
				
				cout << "\n\t\t\tInforme o email do Professor: ";
				getline(cin,email);
				
				cout << "\n\t\t\tInforme o cpf do Professor: ";
				getline(cin,cpf);
								
				cout << "\n\t\t\tInforme o curso do Professor: ";
				getline(cin,curso);
				
				cout << "\n\t\t\tInforme o salario do Professor: ";
				cin >> salario;
				
				cout << endl;

				try{

					if(nome != "" && idade > 0 && sexo != "" && telefone != "" && email != "" && cpf != "" && curso != "" && salario > 0.0){

						prof.setNome(nome);
						prof.setIdade(idade);
						prof.setSexo(sexo);
						prof.setTelefone(telefone);
						prof.setEmail(email);
						prof.setCpf(cpf);
						prof.setCurso(curso);
						prof.setSalario(salario);

						ofs << prof;

						ofs.close();
					
					} else{
					
						system("clear");

						throw "Erro ao cadastrar";

					}

				}catch(const char* e){

					cout << "ERRO: " << endl;

				}

				break;

			}

			case 2:
			{
			
				Funcionario func;

				string nome;
				int idade;
				string sexo;
				string telefone;
				string email;
				string cpf;
				string cargo;
				double salario;

				ofstream ofs("arquivo-funcionario.txt", fstream::app);

				cout << "\n\t\t\tPreencha os campos abaixo para cadastrar o Funcionario :\n";

				cout << "\n\t\t\tDigite o nome do Funcionario: ";
				cin.ignore();
				getline(cin,nome);
				
				cout << "\n\t\t\tInforme a idade do Funcionario: ";
				cin >> idade;
				
				cout << "\n\t\t\tInforme o sexo do Funcionario: ";
				cin.ignore();
				getline(cin,sexo);
				
				cout << "\n\t\t\tInforme o telefone do Funcionario: ";
				getline(cin,telefone);
				
				cout << "\n\t\t\tInforme o email do Funcionario: ";
				getline(cin,email);
				
				cout << "\n\t\t\tInforme o cpf do Funcionario: ";
				getline(cin,cpf);
				
				cout << "\n\t\t\tInforme o cargo do Funcionario: ";
				getline(cin,cargo);
				
				cout << "\n\t\t\tInforme o salario do Funcionario: ";
				cin >> salario;
				
				cout << "--------------------------------------"<<endl;

				try{

					if(nome != "" && idade > 0 && sexo != "" && telefone != "" && email != "" && cpf != "" && cargo != "" && salario > 0.0){

						func.setNome(nome);
						func.setIdade(idade);
						func.setSexo(sexo);
						func.setTelefone(telefone);
						func.setEmail(email);
						func.setCpf(cpf);
						func.setCargo(cargo);
						func.setSalario(salario);

						ofs << func;

						ofs.close();
					
					}else{
						system("clear");

						throw "Erro ao cadastrar";

					}

				}catch(const char* e){

					cout << "ERRO:" << endl;

				}

				break;
			}

			case 3:
			
			{
			
				Aluno<double> alun;
				string nomeAluno;
				int idadeAluno;
				string sexoAluno;
				string telefoneAluno;
				string emailAluno;
				string cpfAluno;
				double Media;

				ofstream ofs("arquivo-aluno.txt", fstream::app);

				cout << "\n\t\t\tPreencha os campos abaixo para cadastrar o Aluno :\n";

				cout << "\n\t\t\tDigite o nome do Aluno: ";
				cin.ignore();
				getline(cin,nomeAluno);
				
				cout << "\n\t\t\tInforme a idade do Aluno: ";
				cin >> idadeAluno;
				
				cout << "\n\t\t\tInforme o sexo do Aluno: ";
				cin.ignore();
				getline(cin,sexoAluno);
				
				cout << "\n\t\t\tInforme o telefone do Aluno: ";
				getline(cin,telefoneAluno);
				
				cout << "\n\t\t\tInforme o email do Aluno: ";
				getline(cin,emailAluno);
				
				cout << "\n\t\t\tInforme o cpf do Aluno: ";
				getline(cin,cpfAluno);

				cout << "\n\t\t\tInforme 4 notas do Aluno (separados por espaço):";

				double nota1, nota2, nota3, nota4;
				
				cin >> nota1 >> nota2 >> nota3 >> nota4;
				Media = (nota1 + nota2 + nota3 + nota4)/4;
				cout << endl;

				system("clear");

				try{
				
					if(nomeAluno != "" && idadeAluno > 0 && sexoAluno != "" && telefoneAluno != "" && emailAluno != "" && cpfAluno != ""){
						
						alun.setNomeAluno(nomeAluno);
						alun.setIdadeAluno(idadeAluno);
						alun.setSexoAluno(sexoAluno);
						alun.setTelefoneAluno(telefoneAluno);
						alun.setEmailAluno(emailAluno);
						alun.setCpfAluno(cpfAluno);
						alun.setMedia(Media);

						ofs << alun;

						ofs.close();

					} else {
						
						system("clear");

						throw "Erro ao cadastrar";

					}
					
				}
				
				catch(const char* e){

					cout << "ERRO: " << endl;

				}

				break;

			}

			case 4:
			{
				menuPrincipal();
			
				break;
			}	

			case 5:
			{
				exit(0);
			}

			default:
			{
				cout <<"\nOpcao nao disponivel no momento, tente novamente." << endl;
			}
			
		}
	
	}

}
/*

void listar(){

	int opcao;

	while(opcao != 4){

		cout << "\n\n\t\t\t\t########## BEM-VINDO A ESCOLA DE FUTEBOL REI PELÉ ##########:\n" << endl;
		cout << "\n\n\t\t\t\tSelecione um dos itens abaixo que deseja listar:\n" << endl;
		cout << "\t\t\t\t\t1 -> Funcionario;\n" << endl;
		cout << "\t\t\t\t\t2 -> Professor;\n" << endl;
		cout << "\t\t\t\t\t3 -> Aluno;\n" << endl;
		cout << "\t\t\t\t\t4 -> Retornar ao menu menuPrincipal;\n" << endl;
		cout << "\t\t\t\t\tOpcao -> ";
		cin >> opcao;

		switch(opcao){
			case 1:
			{
				
				system("cls");

				Funcionario func;

				string nome;
				int idade;
				string sexo;
				string telefone;
				string email;
				string cpf;
				string cargo;
				double salario;

				
				ifstream ifs("arquivo-funcionario.txt");
				
				if(ifs.good()){

					while(!ifs.eof()){

						ifs >> func;

						cout << "Nome : " << nome;
						cout << "Nome : " << sexo;
						cout << "Nome : " << telefone;
						cout << "Nome : " << email;
						cout << "Nome : " << cpf;
						cout << "Nome : " << cargo;
						cout << "Nome : " << salario;
						
					}

					ifs.close();

				}else{

					cout << "Falha ao abrir o arquivo!\n\n";

				}

			}

			break;

			case 2:			
				
				system("cls");
				

			break;

			case 3:	

				system("cls");
				
			
			break;		
						
			default:
				system("cls");
				cout <<"\nOpcao nao disponivel no momento, tente novamente." << endl;
				menuPrincipal();
		}

	}

}
*/

int menuPrincipal(){

	int opcao;

	while(opcao != 3){
		
		cout << "\n\n\t\t\t\t########## BEM-VINDO A ESCOLA DE FUTEBOL REI PELÉ ##########:\n" << endl;
		cout << "\n\n\t\t\t\tSelecione uma das opcoes abaixo que deseja ser executada:\n" << endl;
		cout << "\t\t\t\t\t1 -> Cadastrar(Funcionario, Professor ou Aluno);\n" << endl;
		cout << "\t\t\t\t\t2 -> Listar(Funcionario, Professor ou Aluno);\n" << endl;
		cout << "\t\t\t\t\t3 -> Sair do Programa.\n" << endl;
		cout << "\t\t\t\t\tOpcao -> ";
		cin >> opcao; 
		
		switch(opcao){
			case 1:
				system("clear");
				menuCadastro();
			break;

			case 2:			
				cout << "\t\t\tExit" << endl;
				exit(0);
			break;		
						
			default:
				system("clear");
				cout <<"\nOpcao nao disponivel no momento, tente novamente." << endl;
				menuPrincipal();
		}
	}
	return 0;
}

