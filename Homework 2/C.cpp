#include <iostream>
#include <vector>
using namespace std;

bool repartir (vector<int> a, int M, int B) {
	
	int H=0;
	for (int i=0; i<a.size(); i++) {
		int R;
		R = a[i]/M; if (a[i] % M != 0) R++;
		H += R;
	}
		
	return (B >= H);
}

int main () {
	
	
	vector<int> R;
	while (true) {
	
		int N, B;
		cin >> N >> B;
		if (N == -1) break;
        
        int M=0;
		vector<int> a(N);
		for (int i=0; i<N; i++) {
			cin >> a[i];
			if (a[i] > M) M=a[i];
		}
		
		int X = 0;
		int Z = M;
		while (X < Z) {
			
			M = X + (Z - X)/2;
			if (repartir(a, M, B) == true) Z = M;
			else X = M + 1;

		}
		R.push_back(X);	
		
	}
	
	for (int i=0; i<R.size(); i++) {
		cout << R[i] << endl;		
	}
		
	return 0;
}
