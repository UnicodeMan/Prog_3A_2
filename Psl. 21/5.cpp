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
	int p, dramb, papug, bezdz;

	cout << "Smaugliuko ilgis papugëlëmis: ";// << endl;
	cin >> p;

    dramb = p / 3 / 5;
    bezdz = (p - (dramb  * 15) ) / 3;
    papug = p - dramb * 15 - bezdz * 3;

    cout << dramb << " D, " << bezdz << " B, " << papug << " P";

 /* bezdzio = 3 papug;
    dramb = 5 bezdz

    smaugl = p * papug



*/
	return 0;
}
