//задача 2
#include <iostream>
using namespace std;


using byte = int;


int main(){
    
    pair<byte, byte> posA;
	pair<byte, byte> posB;
    cin >> posA.first >> posA.second;
    cin >> posB.first >> posB.second;
    
    
    if ((posA.first > 0 && posA.first < 8) && (posA.second > 0 && posA.second < 8) && (posB.first > 0 && posB.first < 8) && (posB.second > 0 && posB.second < 8)){
        if (posB.first == posA.first || posA.second == posB.second) { 
        cout << "yes" << endl;
		}
	else{ 
	    cout << "no" << endl;
	}


	if (abs(posA.first-posB.first)==abs(posA.second-posB.second)){ 
	    cout << "yes" << endl;
		}
	else{
	    cout << "no"<<endl;
		}
		
		
	if (abs((posA.first - posB.first)<=1 && abs(posA.second - posB.second)<=1)){
	    cout << "yes" << endl;
	    }
	else { 
	    cout << "no"<< endl; 
	    }
	if ((posB.first == posA.first || posA.second == posB.second)||(abs(posA.first - posB.first) == abs(posA.second - posB.second))){ 
	    cout << "yes" << endl;
	    }
	else { 
	    cout << "no" << endl; 
		}
	if ((abs(posA.first-posB.first) == 1 && posA.second==posB.second)|| (abs(posA.second - posB.second) == 1 && posA.first == posB.first)){ 
	    cout << "turn" << endl; 
	    }
		else if((abs(posA.first - posB.first) == 1 && posA.second == (posB.second -1)) || (abs(posA.second - posB.second) == 1 && posA.first == (posB.first-1))){ 
		    cout << "aim" << endl; 
			}
		else { 
		    cout << "no aim" << endl; 
		    }
        
    }
    else{
        cout<<"error"<<endl;
    }
 
    

    
return 0;
}
