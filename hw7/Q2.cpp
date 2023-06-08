#include <iostream>
using namespace std;

int main(){
    


        int type;
        int seats[10];
        
        string classType;
        int seatNumber = 0;
        int i = 0;
 
    
    
    
    while(true){
        cout<<"Welcome!!";
        
        cout<<"Please press 1 for --> first class.\nPlease type 2 for --> economy\n\n";
        cin>>type;


        if(type==1){

                if(seatNumber==5){
                    string enter;
                    cout<<"All are filled in first class.....\n";
                    cout<<"we can allocate a seat from economic class \nif you want please enter 'Y' ( Capital Letters )";
                    cin>>enter;
                    if(enter == "Y"){
                         seats[i] = 1;
                         classType = "Economy"; 
                         seatNumber = i+1;
                         i = i+1;
                    }else{
                        cout<<"####   Invalid Input   ####\n";
                 }
        


                }else{
                seats[i] = 1;
                classType = "First Class";
                seatNumber = i+1;
                i = i+1;
                }
                
            
        }else if(type == 2){
        
                seats[i] = 6;
                classType = "Economy"; 
                seatNumber = i+1;
                i = i+1;
            
        }else{
            cout<<"####   Invalid Input   ####\n";
        }
        

        cout<<"##### Sri lankan Air Lines ####"<<"\nClass --> "<<classType<<"\nSeat number --> "<<seatNumber<<"\n\n\n\n\n\n\n\n";

        if(seats[9] == 1 ){
            cout<<"All seats are reserved !";
            break;
        }





    }



}


