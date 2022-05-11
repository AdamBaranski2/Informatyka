#include <string>
#include <iostream>
using namespace std;



string kod(string slowo, int klucz) {
    
    for (int i = 0; i < slowo.length(); i++) {
        if ((int)slowo[i]==32) {
        }
        else {
            slowo[i] = (char)((int)slowo[i] + klucz);
        }
    }


  

    return slowo;
}
string dekod(string slowo, int klucz) {

    for (int i = 0; i < slowo.length(); i++) {
        if ((int)slowo[i] == 32) {
        }
        else {
            slowo[i] = (char)((int)slowo[i] - klucz);
        }
    }

    return slowo;
}


int main(){
    cout << "podaj slowo" << endl;
    string slowo="";
    getline(cin, slowo);

    cout << "podaj klucz" << endl;
    int klucz ;
    cin >> klucz;

    string kod1 = kod(slowo, klucz);

    cout << kod1 << endl;

    cout << dekod(kod1, klucz);
}

