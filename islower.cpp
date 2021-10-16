#include <iostream>
#include <ctype.h>
using namespace std;
main(){
	char x;
	cout << "Masukkan Karakter ";
	cin >> x;
	if (islower(x)){
		cout << "Merupakan huruf kecil";
	}else{
		cout << "Bukan huruf kecil";
	}
}
