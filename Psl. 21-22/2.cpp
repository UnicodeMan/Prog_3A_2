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
	int d, k;
	cout << "Failo dydis baitais: ";// << endl;
	cin >> d;

	k = d / 1024;

	cout << k;

	return 0;
}
