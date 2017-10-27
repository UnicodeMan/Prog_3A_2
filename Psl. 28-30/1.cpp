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
	int uj, up;

	cout << "Jonuko ugis centimetrais: ";// << endl;
	cin >> uj;

    cout << "Petriuko ugis centimetrais: ";// << endl;
	cin >> up;

	// Check if Jonukas is taller, then output "taip"

	if(uj > up){
        cout << "Taip";
	}
	else {
        cout << "Ne";
	}
	return 0;
}
