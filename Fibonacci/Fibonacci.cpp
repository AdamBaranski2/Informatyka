

#include <iostream>
using namespace std;


void ciag( int n) {


	long long a = 0, b = 1;
	for (int i = 0; i < n;i++) {
		cout << b;
		b += a;

		a = b-a;


	}


}

int main()


{ 
	int n;
	cout << "podaj dlugosc ciagu ";
	cin >> n;
	ciag (n);


}
