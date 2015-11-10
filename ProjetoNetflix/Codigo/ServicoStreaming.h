#ifndef SERVICOSTREAMING_H
#define SERVICOSTREAMING_H

#include "Servico.h"

class ServicoStreaming : public Servico
{


	public: 
	
		
		
		ServicoStreaming(string = "", string = "", string = "", float = 0);
		
		~ServicoStreaming();
		
		virtual void login() = 0;
		virtual void regUsuario() = 0;
		virtual void uploadFilme() = 0;
		
		
	protected:
	
		
		string filme;
		mensalidade float;
		
};

#endif
