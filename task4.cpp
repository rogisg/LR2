//задача 4
#include <iostream>
using namespace std;

int main(){
    cout<<8 * 9 * 10 * 11 * 12 * 13 * 14 * 15<<endl;
    
    
    int a, s, i;
    s = 1;
    cin >> a;
    for(i = a; i < 21; ++i){
        s = s * i;
    }
    cout << s << endl;
    
    
    int b, s1, j;
    s1 = 1;
    cin >> b;
    for(j = 1; j < b + 1; ++j){
        s1 = s1 * j;
    }
    cout << s1 << endl;
    
    
    int a1, b1, s2, k;
    s2 = 1;
    cin >> a1;
    cin >> b1;
    for(k = a1; k < b1 + 1; ++k){
        s2 = s2 * k;
    }
    cout << s2 << endl;
    
    
    
return 0;
}
