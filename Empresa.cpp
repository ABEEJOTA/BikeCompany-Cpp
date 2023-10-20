#include "Empresa.h"

int Empresa::getSeguentCodiRus()
{
	int i = 1;
	i++;
	return i;
}

bool Empresa::realitzaComanda(Comanda& c, Proveidor& p)
{
	return p.procesaComanda(c, m_magatzemPrincipal);	
}

string Empresa::generaCodiRus(const string& model)
{
		//to_string(i);
	string codirus = ("model", getSeguentCodiRus());
	return codirus;
}
