#pragma once

#include "Comanda.h"
#include "Magatzem.h"

/**
* Clase que produce las comandas recibidas y se encarga de que lleguen al almacen de destino.
* A falta de tener una API externa que nos facilite la implementacion del control de tiempo, el proveedor
* genera una fecha para simbolizar el tiempo que tarda en producir y enviar el pedido.
* 
**/

class Proveidor
{
public:
	Proveidor();
	Proveidor(const int& codiProveidor) { m_codiProveidor = codiProveidor; };
	Data generaDataEnviament(Data dataprevista, int diesmaxim) { m_dataEnviament = dataprevista + diesmaxim; return m_dataEnviament; };
	bool procesaComanda(Comanda c, Magatzem& m);


	void setCodiProveidor(const int& proveidor) { m_codiProveidor = proveidor; };
	int getCodiProveidor() const { return m_codiProveidor; };
	
private:
	int m_codiProveidor;
	Data m_dataEnviament;
};
