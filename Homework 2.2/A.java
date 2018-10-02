import java.util.*;

public class Main {
	
	public static boolean calcular(int a[], double d, int l, int n) {

		int z = 0;
		
		extremo_inf: {
			for (int i=0; i<n; i++) {
				if (a[i] <= d) {
					z = a[i];
					break extremo_inf;
				}
			}
			return false;
		}
	
	
		extremo_sup: {
			for (int i=0; i<n; i++) {
					if (a[i] >= l - d) break extremo_sup;
			}
			return false;
		}
		
		
		while (z + d < l) {
		
			loop: {	
				for (int i=0; i<n; i++) {
					if ( (a[i] <= z + 2*d) && (a[i] > z) ) {
						z = a[i];
						break loop;
					}
				}
				return false;		
			}
		}
		
	return true;
	}
	
	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int l = sc.nextInt();		
		int a[] = new int[n];
		for (int i=0; i<n; i++) {
			a[i] = sc.nextInt();
		}
		
		double A = 0;
		double B = l;
		int y = 0;
		while (A + 0.0000000001 < B) {

			double M;
			M = A + (B - A)/2;
			if (calcular(a, M, l, n) == true) B = M;
			else A = M + 0.00000000001;
			
			y++;
			if (y == 100) break;
					
		}
		
		System.out.println(B);					
	}
	
}
