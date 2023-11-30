/* LANG : C++ */
#include <iostream>

using namespace std;

int main ()
{
    int cash,total,num ;
    cin >> cash ;
    cin >> total ;
    num=cash-total ;

    if (num>=500)
    cout << "500" << num/500 << endl ;
    num=num%500 ;
    if (num>=100)
    cout << "100" << num/100 << endl;
    num=num%100 ;
    if (num>=1)
    cout << "1 " << num ;
    
    return 0;
}
