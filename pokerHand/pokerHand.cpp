#include<iostream>
#include<string>
using namespace std;

int main() {

    string hands[5];
    cin >> hands[0] >> hands[1] >> hands[2] >> hands[3] >> hands[4];
    int count=0;
    bool[27]={false}

    for(int i=0; i<5;i++){
        cout << "In the outer loop" << endl;
        for (int x=(i+1); x<4; x++){
            cout << "In the inner loop" << endl;
            if(hands[i].at(0)==hands[x].at(0)){
                
                count++;

            }

        }

        hands[i].at(0)

    }

    cout << count << endl;
    return 0;

}