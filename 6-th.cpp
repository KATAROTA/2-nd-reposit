#include <iostream>

using namespace std;

const int MINUTESINHOURS = 60;
const int HOURSINDAY = 24;
constexpr int MINUTESOFDAY = HOURSINDAY * MINUTESINHOURS;


int main() {
	int minin, m, h, d = 0;
	cin >> minin;
	d =minin/MINUTESOFDAY;
	cout << "days: " << d << endl;
	minin=minin%MINUTESOFDAY;
	cout <<"minutes of day:" << minin << endl;
	h = minin / MINUTESINHOURS;
	cout << "hours " << h <<endl;
	
	m = minin % MINUTESINHOURS;
	cout << "mins " << m <<endl;
	return 0;
}
