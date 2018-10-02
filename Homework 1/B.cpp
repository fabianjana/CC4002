#include <iostream>
using namespace std;

int main () {

	int n;
	cin >> n;
	string x[n];
	
	for (int i=0; i<n; i++) {
		cin >> x[i];
	}

	for (int k=0; k<n; k++) {
	  if (x[k].length() > 10) {
		cout << x[k].front() << x[k].size() - 2 << x[k].back() << endl;
	  }
	  else {
		cout << x[k] << endl;
	  }
	}

	return 0;
}
