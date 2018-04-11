#ifndef _TEMPLATE_T_
#define _TEMPLATE_T_

template <class t>
t cuadrado(t x) {
    return x * x;
}


template <class Contenedor, class Elem>
bool contiene(Contenedor c, Elem e) {
    for (int i = 0; i < c.size(); i++) {
        if (c[i] == e) {
            return true;
        }
    }
    return false;
}
template <class Contenedor>
bool esPrefijo(Contenedor a, Contenedor b){
    bool res = true;

    if(a.size() < b.size()){
        for(int i =0; i<a.size();i++){
            if(!contiene(b, a[i])){
                res = false;
            }


        }

    }else{
        res = false;
    }

    return res;

}

template <class Contenedor,class Elem>
Elem maximo (Contenedor c){
    Elem res = c[0];
    if(c.size() == 1){
        return c[0];

    }
    else {
        for (int i=0; i<c.size(); i++){
            if(res<c[i]) {
                res = c[i];

            }

        }
    }
    return res;
}






#endif