#include "Magatzem.h"

bool Magatzem::rebreComanda(Comanda& c, vector<Bicicleta*>& paquet, Data dataRecepcioPaquet)
{
	if (c.getTotalBicicletes() == paquet.size() && dataRecepcioPaquet <= c.getDataEntregaPrevista()) {
		return true;
	}
	else
		return false;
}
