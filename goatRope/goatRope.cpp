#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
double dist(int x1, int y1, int x2, int y2) {
	return pow(pow((x1-x2),2) + pow((y1-y2),2),0.5);
}

int main() {
	int x,y,x1,y1,x2,y2;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;


	if(x1<=x && x<=x2) {
		
		cout << min(abs(y-y1),abs(y-y2)) << endl;

	}
	else if (y1<=y && y<=y2) {

		cout << min(abs(x-x1),abs(x-x2)) << endl;

	}
	else {

		double best = dist(x,y,x1,y1);
		best = min(best, dist(x,y,x1,y2));
		best = min (best, dist(x,y,x2,y1));
		best = min(best, dist(x,y,x2,y2));	
		cout << best << endl;
	}

}
