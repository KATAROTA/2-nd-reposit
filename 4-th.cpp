#include <iostream>

using namespace std;

void calculator (int n1, int n2);


int main () {
	int n1, n2 =0;
	cout << "input first number " << endl;
	cin >> n1;
	cout << "input second number " << endl;
	cin >> n2;
	calculator (n1, n2);
	return 0;
}





void calculator (int n1, int n2) {
	cout << "sum= " << n1 + n2 << endl;
	cout << "razn= " << n1 - n2 << endl;
	cout << "umn= " << n1 * n2 << endl;
	cout << "del= " << n1 / n2 << endl;

	

	
		
	
}
