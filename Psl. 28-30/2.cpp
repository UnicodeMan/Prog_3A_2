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
	int a;

	cout << "Astute, koki skaiciuka gavai? ";// << endl;
	cin >> a;

	/* Tikrinam */

	if ((a - 25) >= 0) {
        cout << "Taip";
	}
	else {
        cout << "Ne";
	}

	return 0;
}
