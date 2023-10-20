#include "BicicletaInfantil.h"

BicicletaInfantil::BicicletaInfantil(const string& model, string descripcio, const int& temporada, const Talla& talla, const Quadre& quadre, const Roda& roda, const Fre& fre, TipusBicicleta tipus, const bool& plegable)
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
	m_plegable = plegable;

}
