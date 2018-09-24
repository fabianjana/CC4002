#include <iostream>
#include <vector>
using namespace std;

int main () {

//in
	int N; int Q;
	cin >> N >> Q;
	
	vector<int> v(N);
	for (int i=0; i<N; i++) {
		cin >> v[i];
	}

	vector<int> q(Q);
	for (int i=0; i<Q; i++) {
		cin >> q[i];
	}

//out
	for (int i=0; i<Q; i++){	
		int A = 0;
		int B = N - 1;
		while (A < B) {
			int m = A + (B - A)/2;
			if ((B-A) & 2 != 0) {
				m = m + 1;
			}
			if (v[m] > q[i]) {
				B = m - 1;
			}
			else { 
				A = m; 
			}
		}
	if (v[A] == q[i]) {
		cout << A << endl;
	}
	else {
		cout << -1 << endl;
	}
	}
		
return 0;
}
