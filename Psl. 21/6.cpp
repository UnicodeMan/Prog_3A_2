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
	double a, s;
	cout << "Kubo briaunos ilgis centimetrais: ";// << endl;
	cin >> a;

	s = 6 * (a * a);

	cout << s << " kv. cm";

	return 0;
}
