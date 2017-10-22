// Vieta programos vardui áraðyti

# include <iostream>
# include <cmath>
# include <iomanip>
# include <fstream>
# include <time.h>
# include <cstdlib>

using namespace std;
int main ()
{
    int x, y, ilgis, plotis, S, P;

    cout << "Lektuvo ilgis metrais: ";
    cin >> x;
    // (plotis - x * 3) // nezinau ka as cia rasiau

    cout << "Kiek kartu tvoros ilgis didesnis uz jos ploti metrais: ";
    
    //cout << "Kiek kartu lektuvo ilgis didesnis uz ploti metrais: "; 
    //sena eilute, ko gero neteisingai klausia
    
    cin >> y;
    
    // nezinau, ar paaiskinimas 100% tikslus
    
    /*
     * Uzduotis aprasyta painiai. Duodamos dvi ivestys, lektuvo ilgis
     * metrais, kiek kartu tvoros ilgis didesnis uz tvoros ploti.
     * Taigi, naudosim tvoros ilgi, ploti ir lektuvo ilgi, ploti. 
     * Reikia rasti tvoros ilgis, zinant, kad jis didesnis uz tvoros
     * ploti 3 kartais, kai tvoros plotis lygus triem lektuvo ilgiams.
    */

    plotis = x * 3;
    ilgis = plotis * y;

    P = (plotis + ilgis) * 2;
    S = plotis * ilgis;

    cout << "Tvoros ilgis - " << P << ", plotas - " << S << ".";


    return 0;
}

