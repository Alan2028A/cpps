#include <iostream>

using namespace std;

int main()
{
	int cijena;
	cout << "Unesite cijenu: ";
	cin >> cijena;
	int sati;
	int minute; 
	do {
	cout << "Unesite sate: ";
	cin >> sati;
	} while (sati>23);
	do {
	cout << "Unesite minute: ";
	cin >> minute;
	} while (minute>59);
	cout << cijena-(sati+minute) <<endl;
	return 0;
}
