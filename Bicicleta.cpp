#include "Bicicleta.h"

Bicicleta::Bicicleta(const string& model, string descripcio, const int& temporada, const Talla& talla, const Quadre& quadre, const Roda& roda, const Fre& fre, TipusBicicleta tipus) {
	m_model = model;
	m_descripcio = descripcio;
	m_temporada = temporada;
	m_talla = talla;
	m_quadre = quadre;
	m_roda = roda;
	m_fre = fre;
	m_tipus = tipus;
	//m_cost::100;
	//m_preu = 1;

}


bool Bicicleta::operator<(const Bicicleta& b1) const
{
	//si la nostra bici es mes petita q b1, llavors es cert (?) 
	
	if (b1.m_d < m_d) {
		return false;
	}
	return true;
}
