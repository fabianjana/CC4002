#include <iostream>
#include <vector>
using namespace std;

int main () {
	
//in
	int N;
	int Q;
	cin >> N >> Q;
	
	vector<int> n(N);
	vector<int> q(Q);
	for (int i=0; i<N; i++)	{
		cin >> n[i];
	}	
	for (int i=0; i<Q; i++)	{
		cin >> q[i];
	}	

//out
	
	for (int i=0; i<Q; i++){
		int A = 0;
		int B = N - 1;
		
		while (A < B) {
			int m = A + (B - A)/2;
			if (n[m] <  q[i]) {
				A = m+1;
			}
			else { 
				B = m; 
			}
		}
		if (n[A] == q[i]) {
			cout << A << endl;
		}
		else {
			cout << -1 << endl;
		}
	}

return 0;
}
