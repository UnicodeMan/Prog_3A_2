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
	int n1, n2, n5, n10, ct, lt;

	cout << "Kiek 1 cento monetu guli taupykleje: ";// << endl;
	cin >> n1;

	cout << "Kiek 2 centu monetu guli taupykleje: ";// << endl;
	cin >> n2;

	cout << "Kiek 5 centu monetu guli taupykleje: ";// << endl;
	cin >> n5;

	cout << "Kiek 10 cento monetu guli taupykleje: ";// << endl;
	cin >> n10;

	ct = n1 + n2 * 2 + n5 * 5 + n10 * 10;

	lt = ct / 100;

	ct = ct - lt * 100;

	cout << "Taupykleje yra " << lt << " litu ir " << ct << " centu.";

	return 0;
}
