#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        
        if(x>y){
            cout<<y*1<<endl;
        }
       else
       {
            int a = x * 1 + abs(x - y) * 2;
        cout << a << endl;
       }
    }


}