#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

class CostoSpedizione {

private:
    double peso, distanza;
    char priorita;

    CostoSpedizione();
    CostoSpedizione(double, double, char);


    void setPeso(double);
    void setDistanza(double);
    void setPriorita(char);
    double getPeso();
    double getDistanza();
    char getPriorita();


    double getCostoSpedizione();


}

#endif // TEST_H_INCLUDED
