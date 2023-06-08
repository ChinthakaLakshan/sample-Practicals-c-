
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
    
    int output[10];
     for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            output[i+j] =t[i][j];
        }
    }
    int temp = output[0];
    for(int i=0; i<10; i++) {
      if(temp>output[i]) {
         temp=output[i];
      }
    }
    cout<<"Smallest is --> "<<temp<<"\n\n\n\n";

}
