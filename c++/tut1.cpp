#include<iostream>
#include<string>
using namespace std;


void solve(){
    test{
        string size_1,size_2;
        cin >> size_1 >> size_2;
        if ( size_1 == size_2) cout << "=\n";
        else if( size_1[size_1.size() -1] < size_2[size_2.size() -1]) cout << ">\n";
        else if(size_1[size_1.size() -1] > size_2[size_2.size() -1]) cout << "<\n";
        else if( size_1[size_1.size() -1] == size_2[size_2.size() -1]){
            if( size_1[size_1.size() -1] == 'S'){
                if ( size_1.size() > size_2.size()) cout << "<\n";
                else cout << ">\n";
            }
            else{
                if ( size_1.size() > size_2.size()) cout << ">\n";
                else cout << "<\n";
            }
        }
    }
}
int main()
{
    fast_cin();
    solve();
    return 0;
}