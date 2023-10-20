#include "Proveidor.h"
#include "BicicletaCarretera.h"
#include "BicicletaInfantil.h"
#include "BicicletaMTB.h"
#include "Bicicleta.h"


bool Proveidor::procesaComanda(Comanda c, Magatzem& m){

	vector<Bicicleta*> paquet; // paquet envia a proveedor

	Data DataEnviament = generaDataEnviament(c.getDataEntregaPrevista(), 60); // data enviament proveidor

	vector<lineaComanda> ::iterator it; // llegim cada linia de la comandai posem bici

	for (it = c.getLlistaComanda().begin(); it != c.getLlistaComanda().end(); it++){

		for (int i = 0; i < (*it).m_quantitat; i++){

			if ((*it).tipus == TipusBicicleta::CARRETERA){

				BicicletaCarretera* b = new BicicletaCarretera;
				paquet.push_back(b);
			}
			else if ((*it).tipus == TipusBicicleta::MTB){

				BicicletaMTB* b = new BicicletaMTB;
				paquet.push_back(b);
			}
			else if ((*it).tipus == TipusBicicleta::INFANTIL){

				BicicletaInfantil* b = new BicicletaInfantil;
				paquet.push_back(b);
			}
			else{

				Bicicleta* b = new Bicicleta;
				paquet.push_back(b);
			}
		}
	}
	return m.rebreComanda(c, paquet, DataEnviament);
}