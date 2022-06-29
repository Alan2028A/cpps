#include <iostream>

using namespace std;

int main()
{
	int a;
	do{ 
	cout << "Upisi broj manji od 10: ";
	cin >> a;
	} while (a>10);
	
	
	if (a<10)
	cout << "Upisao si broj manji od 10, hvala!" <<endl;
	else
	cout << "NE UPISUJ 10, NEGO <10!" << endl;
	return 0;
 	// molim vas ne mojte upisivati decimalne brojeve u aplikaciju// 
}
