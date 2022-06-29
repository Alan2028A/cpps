#include <iostream>

using namespace std;

int main()
{
	int cijena;
	cout << "Unesite cijenu: ";
	cin >> cijena;
	int sati;
	cout << "Unesite sate: ";
	cin >> sati;
	int minute;
	cout << "Unesite minute: ";
	cin >> minute;
	cout << cijena-(sati+minute) <<endl;
	return 0;
}
