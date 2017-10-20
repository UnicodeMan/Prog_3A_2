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
	int sk, s1, s2, s3, s4, s5, sum;

	cout << "Iveskite penkiazenkli skaiciu: ";// << endl;
	cin >> sk;

	s1 = sk / 10000;
	s2 = sk / 1000 % 10;
	s3 = sk / 100 % 10;
	s4 = sk / 10 % 10;
	s5 = sk % 10;

//	cout << s1 << s2 << s3 << s4 << s5;

	sum = s1 * s1 * s1 + s2 * s2 * s2 + s3 * s3 * s3 + s4 * s4 * s4 + s5 * s5 * s5;

    cout << sum;

	return 0;
}
