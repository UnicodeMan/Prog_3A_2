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
    setlocale (LC_CTYPE,"");
	int a, p, e, sum;
	cout << "Keik rieðutø atsyneði Juons? ";// << endl;
	cin >> a;

	p = a + 20;// Petrioks atsineði 20 reiðutø daugiau
    e = a * 2; // jelena atsyneði dviguba daugiau ne petriuks

    sum = a + p + e; // kadangi uþdavinys praða sumuos visø trijø vakø, tai tep i darau

    cout << sum;

	return 0;
}
