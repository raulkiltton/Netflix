#include "Telecineplay.h"

Telecineplay::Telecineplay(string endereco, string usuario, string filme, string mensalidade, string blockbuster, string lancamento)
: ServicoStreaming(endereco, usuario, filme, mensalidade)
{
	this->blockbuster = blockbuster;
	this->lancamento = lancamento;
}

Telecineplay::~Telecineplay()





{
}
