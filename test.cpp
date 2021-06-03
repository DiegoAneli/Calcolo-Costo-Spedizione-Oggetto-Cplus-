#include "test.h"

//costruttore predefinito vuoto
CostoSpedizione::CostoSpedizione(){

    int peso = 0;
    int distanza = 0;
    char priorita = 0;

}

//costruttore con parametri
CostoSpedizione::CostoSpedizione(double peso, double distanza,char priorita){

    peso = peso_merce;
    distanza = distanza_merce;
    priorita = priorita_merce;
}


//setter
CostoSpedizione::setPeso(double peso)

    if(peso_merce>0){

        peso = peso_merce;

    }
    else
        throw "il peso non puo esser nullo";
    }

double CostoSpedizione::getPeso()

    return peso;

}


CostoSpedizione::setDistanza(double distanza)

    if(distanza_merce>0){

        distanza = distanza_merce;

    }
    else
        throw "la distanza non puo esser nulla";
    }

double CostoSpedizione::getDistanza()

    return distanza;

}


CostoSpedizione::setPriorita(double priorita)

    if(priorita_merce>0){

        priorita = priorita_merce;

    }
    else
        throw "la priorità non puo esser nulla";
    }

double CostoSpedizione::getPeso()

    return peso;

}





/*void sceltaPriorita(){
    if (priorita == 'alta')
    priorita_merce = priorita;
    else if priorita == 'bassa')
    priorita_merce = priorita;
    else if priorita == 'ALTA')
    priorita_merce = priorita;
    else if priorita == 'BASSA')
    priorita_merce = priorita;
}*/






double CostoSpedizione(){

    float prezzo;

        if (distanza <= 400) && (peso <= 100)
            prezzo = distanza * 2;

        else if (distanza <= 400) && (peso <= 100)
            prezzo = distanza * 3;

        else if (distanza <= 400) && (peso > 100)
            prezzo = distanza * 3;

        else if (distanza <= 400) && (peso > 100)
            prezzo = distanza * 3.5;

        else if (distanza > 400) && (peso <= 100)
            prezzo = distanza * 2.5;

        else if (distanza > 400) && (peso <= 100)
            prezzo = distanza * 3.5;

        else if (distanza > 400) && (peso > 100)
            prezzo = distanza * 4;

        else if (distanza > 400) && (peso > 100)
            prezzo = distanza * 4.5;

        return prezzo;

}





