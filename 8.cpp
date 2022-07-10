#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	cout << "login-1" ;
	cin >>a;
	cout << ">>" <<endl;
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
