#include<iostream>

using namespace std;

int main() {

    int count, second;
    cin >> count >> second;

    int possible = 0;
    
    while (count <= second) {

        bool unique[10]={false};
        long digits[6]={0};
        int rem = 0;
        int num = count;
        for (int i=5;i>=0;i--){

            rem=num%10;
            num=num/10;
            digits[i]=rem;
            if (unique[digits[i]]==false) {unique[digits[i]]=true;}
            else {break;}

        }
        if ((count%(digits[0])==0) && count%(digits[1])==0 && count%(digits[2])==0 && count%(digits[3])==0 && count%(digits[4])==0 && count%(digits[5]==0)) {

            possible++;

        }

        count++;

    }

    cout << possible << endl;

}
