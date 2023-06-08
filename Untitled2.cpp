#include<iostream>
using namespace std;
#include <string>
 #include <conio.h>
 
 
 double getaverage(double a,double b,double c,double d){
	return (a+b+c+d)/4;
	
	
} 


int main(){
int choice;
cout<<"Welcome to student Data Base"<<endl;
while(true){

int i;




cout<<"Press 1 to add student details and press 2 to Display students details"<<endl;
cin>>choice;

if(choice==1){
	int n;
	cout<<"Enter number of student you want to input"<<endl;
	cin>>n;
	
double mats[n];
double english[n];
double sciense[n];
double history[n];
	string name[n];
	
for (int i=0;i<n;i++){
	
cout<<"Enter student name"<<endl;
cin>> name[i];

cout<<"Enter Hisory mark"<<endl;
cin>> history[i];

cout<<"Enter Maths mark"<<endl;
cin>>  mats[i];

cout<<"Enter sciense mark"<<endl;
cin>> sciense[i];

cout<<"Enter english mark"<<endl;
cin>> english[i];
 
 

}

double average[4];

//cout<<getaverage(history[i],mats[i],sciense[i],english[i])<<endl;
for (int k=0;k<n;k++){
	average[k]=getaverage(history[i],mats[i],sciense[i],english[i]);
	cout<<average[k]<<"\t";
	i++;
}
for(int l=0;l<n;l++){
	for(int m=1+l;m<n;m++){
		if(average[l]>average[m]){
			double temp=average[l];
			average[l]=average[m];
			average[m]=temp;
			
		}
		
		
	}
}
for(i=0;i<n;i++){

		cout<<average[i]<<"\t";
	cout<<endl;}
}




}











}
