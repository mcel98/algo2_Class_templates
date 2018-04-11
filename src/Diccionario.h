#ifndef __DICCIONARIO_H__
#define __DICCIONARIO_H__

#include <vector>
using namespace std;

typedef int Clave;
typedef int Valor;

class Diccionario {
public:
	Diccionario();
	void definir(Clave k, Valor v);
	bool def(Clave k) const;
	Valor obtener(Clave k) const;
	std::vector<Clave> Diccionario<Clave,Valor>::claves() const;
private:

	struct Asociacion {
		Asociacion(Clave k, Valor v);
		Clave clave;
		Valor valor;
	};
	std::vector<Asociacion> _asociaciones;
};

#endif /*__DICCIONARIO_H__*/
