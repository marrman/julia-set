#include<bits/stdc++.h>

using namespace std;
 
int main() {
	cout << "choose c" << endl;
	cout << "real component" << endl;
	long double creal;
	cin >> creal;
	cout << "imaginary component" << endl;
	long double cimaginary ;
	cin >> cimaginary;
	
	
	int h = 200;
	int w = 200;
	
	char screen[h][w];
	fill(*screen, *screen+w*h, '#');
	
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			
			long double tempreal = 1.5*(i-w/2)/(w/2);
			long double tempimaginary = 1.0*(j-h/2)/(h/2);
						
			for (int k = 0; k < 100; k++) {
				if (tempreal*tempreal + tempimaginary*tempimaginary > 4) {
					screen[i][j] = '.';
					break;
				}
				tempimaginary = 2.0*tempreal*tempimaginary + cimaginary;
				tempreal = tempreal*tempreal - tempimaginary*tempimaginary + creal;
			}
		}
	}
	
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << screen[i][j];
		}
		cout << endl;
	}
}
