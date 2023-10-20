#pragma once

#include <string>

#include "Data.h"


/**
* Enumeraciones necesarias para la creacion de bicicletas.
* Los valores son necesarios para poder realizar un control de errores eficiente.
* Si algun constructor recibe un parametro "ileagal" debeis establecer como valor por defecto
* el valor permitido mas peque�o del enum.
* 
**/

enum class TipusBicicleta
{
	INFANTIL = 100,
	MTB = 200,
	CARRETERA = 250
};

enum class Fre
{
	DISC = 0,
	RIM = 1,
};

enum class Quadre
{
	ALUMINI = 0,
	CARBONO = 1,
};

enum class Roda
{
	RODA_26 = 0,
	RODA_27 = 1,
	RODA_29 = 2,
	RODA_14 = 3,
	RODA_20 = 4,
	RODA_700 = 5,
};


enum class Talla
{
	XS = 0,
	S = 1,
	M = 2,
	L = 3,
	XL = 4,
};


/**
* Bicicleta es una clase que contiene toda la informacion relevante para definir una bicicleta generica.
* 
**/
class Bicicleta
{
public:
	Bicicleta() {
		m_model = '_';
		m_descripcio = '_';
		m_codirus = 'null';
		m_temporada = 0;
		m_talla = Talla::L;
		m_quadre = Quadre::ALUMINI;
		m_roda = Roda::RODA_14;
		m_fre = Fre::DISC;
		m_tipus = TipusBicicleta::CARRETERA;
		m_dataEntrada = Data(0,0,0);
		m_cost = TipusBicicleta::CARRETERA;
		m_preu = 1;
		m_d = Data(0,0,0);
	};
	Bicicleta(const string& model, string descripcio, const int& temporada, const Talla& talla, const Quadre& quadre, const Roda& roda, const Fre& fre, TipusBicicleta tipus);
	virtual ~Bicicleta();
	
	string getModel() const { return m_model; };
	string getDescripcio() const { return m_descripcio; };
	string getCodiRus() const { return m_codirus; };
	int getTemporada() const { return m_temporada; };
	Talla getTalla() const { return m_talla; };
	Quadre getQuadre() const { return m_quadre; };
	Roda getRoda() const { return m_roda; };
	Fre getFre() const { return m_fre; };
	TipusBicicleta getTipus() const { return m_tipus; };
	Data getDataEntrada() const { return m_d; };
	virtual void setModel(const string& model) final  {m_model = model;};
	virtual void setDescripcio(const string& descripcio) final { m_descripcio = descripcio; };
	virtual void setCodiRus(const string& codirus) final { m_codirus = codirus; };
	virtual void setTemporada(const int& temporada) final { m_temporada = temporada; };
	virtual void setTalla(const Talla& talla) final { m_talla = talla; };
	virtual void setRoda(const Roda& roda) { m_roda = roda; };
	virtual void setQuadre(const Quadre& quadre) { m_quadre = quadre; };
	virtual void setFre(const Fre& fre) { m_fre = fre; };
	//virtual void setTipus(TipusBicicleta tipus) { m_tipus = tipus; };
	//virtual void setPreu(TipusBicicleta cost) { m_cost = cost; };
	virtual void setTipus(TipusBicicleta tipus) { this->m_tipus = tipus; }
	virtual void setPreu(TipusBicicleta cost) { this->m_preu = float(cost); }
	virtual float getPreu() const { return m_preu; };
	void setDataEntrada(Data d) { m_d = d; };

	bool operator<(const Bicicleta &b1) const;
	virtual ostream& format(ostream& os) const { return os; }
	
protected:
	string m_model;
	string m_descripcio;
	string m_codirus;
	int m_temporada;
	Talla m_talla;
	Quadre m_quadre;
	Roda m_roda;
	Fre m_fre;
	TipusBicicleta m_tipus;
	Data m_dataEntrada;
	TipusBicicleta m_cost; 
	float m_preu = 1;
	Data m_d;

};
