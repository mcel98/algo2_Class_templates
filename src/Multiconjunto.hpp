#ifndef _TEMPLATE_M_
#define _TEMPLATE_M_
#include "Diccionario.hpp"
template <class T>

class Multiconjunto{
public:
    Multiconjunto();
    void insertar(T x);
    int ocurrencias(T x) const;

private:
    Diccionario< T , int > _Dic;

};

template <class T>
Multiconjunto<T>::Multiconjunto(){}

template <class T>
void Multiconjunto<T>::insertar(T x){
    _Dic.definir(x,_Dic.obtener(x)+1);
}

template <class T>
int Multiconjunto<T>::ocurrencias(T x) const {
    return _Dic.obtener(x);

}


#endif