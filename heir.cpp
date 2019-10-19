#include<iostream>

using namespace std;

bool isGood(int n) {

    int d=n;

    int digits[6];
    for (int i=0; i<6; i++) {
        
        int rem=d%10;
        d=d/10;
        digits[i]=rem;
    }
    for (int x=0; x<6; x++) {

        if (digits[x]==0) {return false;}
        if (n%digits[x]!=0) {return false;}
        for (int y=(x+1); y<6; y++) {

            if (digits[x]==digits[y]) {return false;}

        }

    }

    return true;

}



int main() {

    int count, second;
    cin >> count >> second;
    int possible=0;
    
    while (count <= second) {

        if (isGood(count)==true) {

            possible++;

        }





        count++;
    }

    cout << possible << endl;

}
