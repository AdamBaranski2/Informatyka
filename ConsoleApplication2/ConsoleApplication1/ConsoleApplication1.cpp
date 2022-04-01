
#include <iostream>
using namespace std;

int main()
{

   int a = 0;
   int b = 0;

   cout << "podaj liczbe" << endl;;
   cin >> a ;
   cout << "podaj druga liczbe" << endl;
   cin >> b ;
   
   while (a != b)
   {

	   if (a > b) {

		   a -= b;




	   }

	   else
		   b -= a;
   }
   int NWD = a;
   cout<<"NWD: " << NWD;
   cout << "NWW: " << NWD/(a*b);
}



