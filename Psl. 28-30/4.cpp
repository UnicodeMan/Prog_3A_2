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
	int v1, v2;

	cout << "Pirmojo automobilio greitis, km/h: ";// << endl;
	cin >> v1;

    cout << "Antrojo automobilio greitis, km/h: ";// << endl;
	cin >> v2;

	if(v1 > v2) {
        cout << "Taip";
	}
	else {
        cout << "Ne";
	}
	return 0;
}
