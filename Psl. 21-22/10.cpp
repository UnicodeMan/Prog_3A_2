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
	double m, s, ats; // kiek kainavo saldainiai ir kiek kilogramu pirkai reikes ivesti su tasku, pvz 12.50 lt, todel naudoju double
	int lt, ct; // paverciant litais ir centais reikes sveiku skaiciu (be tasko)

	cout << "Kiek kg saldainiu? ";
	cin >> m; // kint. "m" yra double

	cout << "Uz tuos saldainius sumokejai, litais? ";
	cin >> s; // kint. "s" yra double


	ats = s / m;
	ct = ats * 100; // atsakyma paverciam i centus
	lt = ct / 100; // surandam, kiek is tu centu iseitu pilnu litu
	ct = ct - lt * 100; // suskaiciuojam centu likuti is visu centu atemus litus (lt * 100, kad paverst i centus)

    cout << "1kg saldainiu kainuos " << lt << " lt ir " << ct << " ct.";




	return 0;
}

