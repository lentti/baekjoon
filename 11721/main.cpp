#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cin >> a;
    for(int i=0;i<a.size();i++){
        cout<<a[i];
        if(i%10 == 9)
            cout << endl;
    }
    return 0;
}