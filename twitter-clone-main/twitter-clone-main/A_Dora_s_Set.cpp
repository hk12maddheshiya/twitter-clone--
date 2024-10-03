#include<iostream>

using namespace std;




int main() {


        int t; cin >> t;

        while(t--) {

                int l, r; cin >> l >> r;

        if(l % 2 == 0) l++;

        cout << (r - l + 2) / 4 << '\n';

        }

}