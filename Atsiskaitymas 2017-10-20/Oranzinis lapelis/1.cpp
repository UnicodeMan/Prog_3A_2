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

	cout << "Lektuvo ilgis metrais: ";// << endl;
	cin >> x;
	// (plotis - x * 3)

	cout << "Kiek kartu lektuvo ilgis didesnis uz ploti metrais: ";// << endl;
    cin >> y;

    plotis = x * 3;
    ilgis = plotis * y;

    P = (plotis + ilgis) * 2;
    S = plotis * ilgis;

    cout << "Tvoros ilgis - " << P << ", plotas - " << S << ".";


	return 0;
}
