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
	int a, b;
	cout << "Rasyk skaiciu a: ";// << endl;
	cin >> a;

	if (a >= 0) {
        b = a + 1;
	}
	else {
        b = a - 3;
	}
	cout << b;

	return 0;
}
