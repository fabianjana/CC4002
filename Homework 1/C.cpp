#include <iostream>
using namespace std;

int main () {
	
	int x[5][5];
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cin >> x[i][j];
		}
	}


	int a, b;
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			if (x[i][j] == 1) {
				a = i; b = j;
			}
		}
	}

	int p[2] = {a, b};
	int m = 0;
	for (int i=0; i<2; i++) {
		switch (p[i]) {
			case 2:
				break;
			case 0:
			case 4:
				m++;
			case 1:
			case 3:
				m++;				
		}
	}

	cout << m;

return 0;
}
