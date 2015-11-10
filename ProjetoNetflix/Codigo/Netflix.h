#ifndef NETFLIX_H
#define NETFLIX_H

#include "ServicoStreaming.h"

class Netflix : public ServicoStreaming
{
	public:
		
		
		Netflix(string = "", string = "", string = "", float = 0, int = 0, int = 0, int = 0);
		
		~Netflix();
		
		
		void avaliarFilme ();
		void sugerirFilme ();
				
		
		
	private:
		
		
		int perfilUsuario;
		int avaliacao;
		int armazeFilme;
				
				
};

#endif
