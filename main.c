#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    unsigned long long Anfangszahl = 1;
    int Eins = 1;
    unsigned long long AktuelleZahl = Anfangszahl;
    unsigned long long Endzahl = pow(2, 64) - 1;



    while (Anfangszahl != Endzahl)
    {
        printf("%20llu", AktuelleZahl); //Ausgabe der aktuellen Zahl
        printf("%50llu\n", Anfangszahl);

        if (AktuelleZahl % 2 != 0) //Der klassiche 3x+1 Algorithmus
        {
            AktuelleZahl = 3 * AktuelleZahl + 1;
        }else{
            AktuelleZahl = AktuelleZahl / 2;
        }

        if (Eins == AktuelleZahl)
        {
            printf("%2llu\n", AktuelleZahl); //Ausgabe der aktuellen Zahl
            Anfangszahl = Anfangszahl + 1;
            AktuelleZahl = Anfangszahl;

        }
        
    }  
    return 0;
}