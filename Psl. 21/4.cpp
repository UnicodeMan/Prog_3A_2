// Vieta programos vardui �ra�yti

# include <iostream>
# include <cmath>
# include <iomanip>
# include <fstream>
# include <time.h>
# include <cstdlib>

using namespace std;
int main ()
{
    setlocale (LC_CTYPE,"");
	int a, p, e, sum;
	cout << "Keik rie�ut� atsyne�i Juons? ";// << endl;
	cin >> a;

	p = a + 20;// Petrioks atsine�i 20 rei�ut� daugiau
    e = a * 2; // jelena atsyne�i dviguba daugiau ne petriuks

    sum = a + p + e; // kadangi u�davinys pra�a sumuos vis� trij� vak�, tai tep i darau

    cout << sum;

	return 0;
}
