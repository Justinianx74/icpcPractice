#include<iostream>

using namespace std;

int main() {

    long count, second;
    cin >> count >> second;
    long rem = 0;
    long possible = 0;
    long num = count;
    
    while (count <= second) {

        bool unique[10]={false};
        long digits[6]={0};
        rem = 0;
        num = count;
        for (int i=5;i>=0;i--){

            rem=num%10;
            num=num/10;
            digits[i]=rem;
            if (unique[digits[i]]==false) {unique[digits[i]]=true;}
            else {break;}

        }
        if (digits[0]==0 || digits[1]==0 || digits[2]==0 || digits[3]==0 || digits[4]==0 || digits[5]==0) {cout << "What the frick" << endl; cout << count << endl;}
        else {
            if ((count%(digits[0])==0) && count%(digits[1])==0 && count%(digits[2])==0 && count%(digits[3])==0 && count%(digits[4])==0 && count%(digits[5]==0)) {

                possible++;

            }
        }
        count++;

    }

    cout << possible << endl;

}
