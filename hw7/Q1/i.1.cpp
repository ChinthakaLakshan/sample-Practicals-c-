
#include <iostream>
using namespace std;

int main(){


    
    
    int t[2][5];
    cout<<"Please enter the values\n";
     for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            cin>>t[i][j];
        }
    }
    cout<<"\nPrinting array......\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            cout<<t[i][j]<<endl;
        }
    }




}
