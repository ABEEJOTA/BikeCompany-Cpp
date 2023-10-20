#include "BicicletaMTB.h"

BicicletaMTB::BicicletaMTB(const string& model, string descripcio, const int& temporada, const Talla& talla, const Quadre& quadre, const Roda& roda, const Fre& fre, TipusBicicleta tipus, Categoria categoria, Modalitat modalitat, bool electrica)
{/*
	setModel(model);
	setDescripcio(descripcio);
	setTemporada(temporada);
	setTalla(talla);
	setQuadre(quadre);
	setRoda(roda);
	setFre(fre);
	setTipus(tipus);*/
	Bicicleta(model, descripcio, temporada, talla, quadre, roda, fre, tipus);
	m_modalitat = modalitat;
	m_electrica = electrica;
	m_categoria = categoria;
}
