#pragma once

#include "Bicicleta.h"

enum class ModalitatC {
	AERO,
	GRANFONDO,
	GRAVEL,
	RENDIMIENTO,
};

/**
* BicicletaCarretera contine la inforacion relenavte para definir una bicicleta de carretera.
* 
**/
class BicicletaCarretera : protected Bicicleta
{
public:
	BicicletaCarretera() { m_modalitat = ModalitatC::AERO; m_electrica = false; };
	BicicletaCarretera(const string& model, string descripcio, const int& temporada, const Talla& talla, const Quadre& quadre, const Roda& roda, const Fre& fre, TipusBicicleta tipus, ModalitatC modalitat, bool electrica);
	~BicicletaCarretera();
	void setModalitat(const ModalitatC& modalitat) { m_modalitat = modalitat; };
	ModalitatC getModalitat() const { return m_modalitat; };

	void setElectricaC(const bool& electrica) { m_electrica = electrica; };
	bool getElectrica() const { return m_electrica; };
	void setRoda(const Roda& roda) override;
	void setTipus(TipusBicicleta tipus) override;

protected:
	ostream& format(ostream& os) const override;
private:
	ModalitatC m_modalitat;
	bool m_electrica;


};

