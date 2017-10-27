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

	cout << "Sk. a: ";// << endl;
	cin >> a;

	cout << "Sk. b: ";
	cin >> b;

	if (a <= b) {
        cout << a << " " << b;
	}
	else {
        cout << b << " " << a;
	}

	return 0;
}
