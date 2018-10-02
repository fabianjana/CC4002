#include <iostream>
#include <vector>
using namespace std;

bool repartir(int v[], int n, int m, int M) {
	int k=0;
	for (int i=0; i<m; i++) {
		int sum=0;
		while (true) {
			sum+=v[k];
			k++;
			if (k==n && sum<=M) return true;
			if (k==n && sum>M) return false;
			if(sum+v[k]>M) break;
		}
	}
return false;
}

int main() {

	int n, m;
	vector<int> R;
	while (cin >> n >> m) {
		int v[n];
		int max=0;
		int mm=0;
		for (int i=0; i<n; i++) {
			cin >> v[i];
			max+=v[i];
			if (v[i]>mm) mm=v[i];
		}
		int M=0, A=0, B=max;
		while (A<B) {
			M=A+(B-A)/2;
			if (repartir(v, n, m, M) == true) B=M;
			else A=M+1;
			
			//cout << A << " " << M << " " << B << endl;
			
		}
		if (mm > B) B = mm;
		R.push_back(B);	
	}
	
	for (unsigned int i = 0; i < R.size(); i += 1)
	{
		cout << R[i] << endl;
	}
	
	return 0;
}
