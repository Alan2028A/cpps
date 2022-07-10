#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	do{
	cout << "login-1" ;
	cin >>a;
	cout << ">>" <<endl;
	}while (a<1 , a>2);
	if (a=1)
	cout << "UserName: " ;
	cin >>b;
	cout << "PassWord: " ;
	cin >>c;
	if (c==3, b==1)
	cout << "Access granted!" <<endl;
	else cout << "Access Denied." <<endl;
	return 0;
}
// README: https://github.com/Alan2028A/cpps/blob/main/readme.md
