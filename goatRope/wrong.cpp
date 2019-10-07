#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int findRegion(int x, int x1, int x2) {
    if(x<x1) {

        return 1;

    }
    else if (x>x2) {

        return 3;


    }

    else {

        return 2;

    }
}

double pthe (int x, int y, int x1, int y1) {

    return pow(((x1-x)*(x1-x)+(y1-y)*(y1-y)),(1/2));

}

int main(){

    double x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    
    int xregiion = findRegion(x, x1, x2);
    int yregion = findRegion(y,y1,y2);
    int sum = xregiion + yregion;
    double dist;

    switch(sum) {

        case 2:
        case 4:
        case 6:
            dist = min(
                min (pthe(x,y,x1,y1),
                pthe(x,y,x2,y1)),
                min (pthe(x,y,x1,y2),
                pthe(x,y,x2,y2))
            );
            break;
         case 3:
         case 5:  
            dist = min(
                min (pthe(x,y,x1,y1),
                pthe(x,y,x2,y1)),
                min (pthe(x,y,x1,y2),
                pthe(x,y,x2,y2))
            );
            break;
    }
        cout << dist << endl;
        return 0;
}
