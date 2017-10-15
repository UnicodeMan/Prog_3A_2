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
	int s, m=0, v=0;

	cout << "Nuo paros praëjo sekundþiø: ";// << endl;
	cin >> s;

	if (s < 60){
        cout << s << " s.";
	}
	else{
        v = s / 3600;
        m = (s - v * 3600) / 60;
//        s = s - v * 3600 - m * 60;
	}
	cout << v << " val. " << m << " min.";

	return 0;
}
