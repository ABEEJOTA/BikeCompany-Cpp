#pragma once

#include "Bicicleta.h"
#include <string>

/**
* BicicletaInfantil contine la inforacion relenavte para definir una bicicleta infantil.
* 
**/
class BicicletaInfantil : protected Bicicleta
{
public:
	BicicletaInfantil() { m_plegable = false; };
	BicicletaInfantil(const string& model, string descripcio, const int& temporada, const Talla& talla, const Quadre& quadre, const Roda& roda, const Fre& fre, TipusBicicleta tipus, const bool& plegable);
	~BicicletaInfantil();

	bool getPlegable() const { return m_plegable; };
	void setPlegable(const bool& plegable) { m_plegable = plegable; };
	void setQuadre(const Quadre& quadre);
	void setFre(const Fre& fre) override;
	void setRoda(const Roda& roda) override;
	void setTipus(TipusBicicleta tipus) override;

protected:
	ostream& format(ostream& os) const override;
private:
	bool m_plegable;


};

