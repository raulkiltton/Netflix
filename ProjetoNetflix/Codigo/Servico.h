#ifndef SERVICO_H
#define SERVICO_H
#include <iostream>
using std::cout;
using std::endl;
using namespace std;

#include <string>
using std::string;



 class Servico
 
 
{
	
	public: 
	
	
	
		Servico (string = "", string = "" );
	
	
		~Servico();
	
		virtual void login ()=0;
		virtual void regUsuario ()=0;
	
		
	protected:
	
		string endereco;
		string usuario;
	
		
	
	 
};

#endif
