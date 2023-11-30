/* LANG : C++ */
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main ()
{
	float height;
	cin >> height;
	if (height<149.99) cout << "Dwarf" ;
	else if (height<165) cout << "Standard Height" ;
	else if (height<190) cout << "Taller" ;
	else cout << "Abnormal Height";
	
	return 0;
}
