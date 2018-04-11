#ifndef _TEMPLATE_D_
#define _TEMPLATE_D_
using namespace std;

template <class Clave, class Valor>
class Diccionario {
private:
       struct Asociacion;
public:
       Diccionario();
       void definir(Clave k, Valor v);
       bool def(Clave k) const;
       Valor obtener(Clave k) const;
       vector<Clave> claves() const;
       vector<Clave> TodasLasClaves(vector<Asociacion> a) const;
       void swap(vector<Clave> &c,int a, int b)const ;
       void insertionSort(vector<Clave> &c)const ;

        private:

            struct Asociacion {
                Asociacion(Clave k, Valor v);
                Clave clave;
                Valor valor;
            };
            vector<Asociacion> _asociaciones;
};

template <class Clave, class Valor>
Diccionario<Clave,Valor>::Diccionario() {

}
template <class Clave, class Valor>
Diccionario<Clave,Valor>::Asociacion::Asociacion(Clave k, Valor v) : clave(k), valor(v) {
}

template <class Clave, class Valor>
void Diccionario<Clave,Valor>::definir(Clave k, Valor v) {
    for (unsigned int i = 0; i < _asociaciones.size(); i++) {
        if (_asociaciones[i].clave == k) {
            _asociaciones[i].valor = v;
            return;
        }
    }
    _asociaciones.push_back(Asociacion(k, v));
}


template <class Clave, class Valor>
bool Diccionario<Clave, Valor>::def(Clave k) const {
    for (unsigned int i = 0; i < _asociaciones.size(); i++) {
        if (_asociaciones[i].clave == k) {
            return true;
        }
    }
    return false;
}



template <class Clave, class Valor>
Valor Diccionario<Clave,Valor>::obtener(Clave k) const {
    for (unsigned int i = 0; i < _asociaciones.size(); i++) {
        if (_asociaciones[i].clave == k) {
            return _asociaciones[i].valor;
        }
    }

}
template <class Clave, class Valor>
vector<Clave> Diccionario<Clave,Valor>::claves() const {
    vector<Clave> D = TodasLasClaves(_asociaciones);
    insertionSort(D);
    return D;

}
template < class Clave, class Valor>
vector<Clave> Diccionario<Clave,Valor>::TodasLasClaves(vector<Asociacion> a)const{
    vector<Clave> res;
    for(int i =0; i <a.size(); i++){
        res.push_back(a[i].clave);


    }

    return res;
}
template <class Clave, class Valor>
void Diccionario<Clave,Valor>::insertionSort(vector<Clave> &c)const {
for(int i =0; i<c.size(); i++){
    for(int j = i; j>0 && c[j]<c[j-1]; j--){
        swap(c,j,j-1);

    }


}

}
template <class Clave, class Valor>
void Diccionario<Clave,Valor>::swap(vector<Clave> &c, int j, int k)const{

    vector<Clave> copia = c;
    c[j] = copia[k];
    c[k] = copia[j];

}


#endif