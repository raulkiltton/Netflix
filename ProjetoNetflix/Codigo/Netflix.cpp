#include "Netflix.h"

Netflix::Netflix(string endereco, string usuario, string filme, string mensalidade, int perfilUsuario, int avaliacao, int armazeFilme)
: ServicoStreaming(endereco, usuario, filme, mensalidade)
{
	this->perfilUsuario = perfilUsuario;
	this->avaliacao = avaliacao;
	this->armazeFilme = armazeFilme;
	
	
	
}

Netflix::~Netflix()
{
}
