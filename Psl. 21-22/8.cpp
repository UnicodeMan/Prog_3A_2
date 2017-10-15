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
	double r1, r2, s ;

	cout << "r1: ";// << endl;
	cin >> r1;

	cout << "r2: ";// << endl;
	cin >> r2;

    s = 3.14 * (r1 * r1 - r2 * r2);

    cout << fixed << setprecision(0) << s << " kv. mm";

	return 0;
}
