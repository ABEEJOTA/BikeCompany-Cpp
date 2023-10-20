#pragma once
#include <vector>

#include "Bicicleta.h"
#include "Data.h"

/**
* Entrada que agrupa los datos de cada pedido. Contiene el tipo, la cantidad y el modelo.
**/
struct lineaComanda{
	TipusBicicleta tipus;
	int m_quantitat;
	string m_model;
};

/**
* Clase que almacena el pedido y los datos relacionados con �l.
* Una comanda debe de ser capaz de saber el totl de bicicletas pedidas, la fecha de entrega y el coste asociado a la misma.
**/
class Comanda
{
public:

	Comanda(const Data& entregaPrevista, vector<lineaComanda>& comanda) { m_entregaPrevista = entregaPrevista; m_llistaComanda = comanda; };

	int getTotalBicicletes() const { return m_comanda.m_quantitat; };
	Data getDataEntregaPrevista() const { return m_entregaPrevista; };
	float getCostTotal() const { return m_costTotal; };
	vector<lineaComanda> getLlistaComanda() const { return m_llistaComanda; };

private:
	lineaComanda m_comanda;
	Data m_entregaPrevista;
	float m_costTotal;
	vector<lineaComanda> m_llistaComanda;
};
