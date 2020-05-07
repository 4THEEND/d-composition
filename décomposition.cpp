#include <string>
#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

bool verif_nb(int resultat)
{
    string const fichier("chiffres.txt");
    ofstream monFlux(fichier); 
    if(monFlux)  
    {
        int nb_recup_final;
        int nb_recup_final1;
        int nb_recup_final2;
        string ligne; 
        while(getline(fichier, ligne))
        {
            if (nb_recup_final == resultat)
            {

            }
        }
        return false;
    }
    else{cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;}
}
bool rentrer_resultat(int resultat, int nb1, int nb2)
{
    string const fichier("chiffres.txt");
    ofstream monFlux(fichier.c_str(), ios::app);
    if(monFlux)  
    {
        monFlux << resultat << " " << nb1 << " " << nb2 << endl;
    }
    else{cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;}
}
bool verif(int nombreEntier)
{
    int i, root ;
    if (nombreEntier <= 1)
    {
        return false;
    }
    if (nombreEntier == 2)
    {
        return true;
    }
    if ((nombreEntier % 2) == 0)
    {
        return false;
    }
    root = sqrt(nombreEntier);
    for (i = 3; i <= root; i += 2)
    {
        if ((nombreEntier % i) == 0)
        {
            return false;
        }
    }
    return true;
}
int calcul(int chiffre)
{  
    for (int a = 0; a < chiffre; a++)
    {
        for (int b = 0; b < chiffre; b++)
        {
            if (a*b == chiffre)
            {
                if (verif(a) == true && verif(b) == true)
                {
                    cout << a << " x " << b << " = " << chiffre << endl;
                    if (chiffre >= 5000)
                    {
                        rentrer_resultat(chiffre, a, b)
                    }
                    return 0;
                }
            }
        }
    }
    cout << "ce nombre n'est pas un mulltiple de deux nombres premiers." << endl;
    return 1;
}
int main()
{
    int a;
    while (true)
    {
        cout << "entrez un nombre" << endl;
        cin >> a;
        calcul(a);
    }
}