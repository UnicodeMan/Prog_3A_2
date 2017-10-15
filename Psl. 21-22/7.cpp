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
	double a, b, c, d;

	cout << "a: ";// << endl;
	cin >> a;
    cout << "b: ";// << endl;
	cin >> b;
    cout << "c: ";// << endl;
	cin >> c;

    d = (a + b + c) / 3;

    cout << d << " m.";


	return 0;
}
