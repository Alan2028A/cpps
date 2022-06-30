#include <iostream>

using namespace std;

int main()
{
	int kv;
	do{
	cout << "Upisi kvalitetu zraka: ";
	cin >> kv;
	}while (kv<1 || kv>500);
	if (kv<=50)
	cout << "dobra kvaliteta zraka." <<endl;
	else if (kv<=100)
	cout << "umjerena kvaliteta zraka." <<endl;
	else if (kv<=150)
	cout << "zrak ne zdrav za osjetljive grupe."  <<endl;
	else if (kv<=200)
	cout << "nezdrav zrak." << endl;
	else if (kv<=300)
	cout << "vrlo nezdrav zrak." <<endl;
	else if (kv<=500)
	cout << "opasan zrak." << endl;
	return 0;
}
