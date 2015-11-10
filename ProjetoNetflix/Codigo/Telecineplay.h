#ifndef TELECINEPLAY_H
#define TELECINEPLAY_H

#include "ServicoStreaming.h"

class Telecineplay : public ServicoStreaming
{
	public:
							
		Telecineplay(string = "", string = "", string = "", float = 0, string = "", string = "");
		~Telecineplay();
		
		
		void alugarBlockbuster ();
		void alertaLancamento ();
		
	



	private:
		
		string blockbuster;
		string lancamento;
		

	




};

#endif
