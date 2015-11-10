#include "ServicoStreaming.h"


ServicoStreaming:ServicoStreaming(string endereco, string usuario, string filme, string mensalidade)
: Servico(endereco, usuario)
{
	this->filme = filme;
	this->mensalidade = mensalidade;
	
}
