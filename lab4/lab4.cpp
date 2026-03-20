#include <iostream>
using namespace std;
double degr(double a, int b) {
	double resl = 1.0;
	for (int i = 0; i < b; i++) {
		resl *= a;
	}
	return resl;
}


int main() {
	double x0, x1, x2, res0, res1,res2, mx;
	int y0, y1, y2;
	cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
	if (x0 < 0 || y0 < 0 || x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0) {
		cout << "Not OK";
		return 1;
	}
	res0 = degr(x0, y0);
	res1 = degr(x1, y1);
	res2 = degr(x2, y2);
	mx = max(max(res0, res1), res2);
	cout << mx << endl;
	return 0;
}