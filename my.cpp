#include <iostream>
using namespace std;
#include <string>
#include <iomanip>



struct studentDetails{
	string name;
	double englishMark;
	double mathsMark;
	double historyMark;
	double scienseMark;
	double averageMark;
};
struct studentDetails student[40];
int studentCount;

double getAverage(double maths,double history,double sciense,double english){
	
	return (maths+history+sciense+english)/4;
	
}

void displayAverage(string stuName,double averagemark){
	double temp;
	for(int i =0;i<studentCount;i++){
		for (int j=i+1;j<studentCount;j++){
			if (student[i].averageMark>student[j].averageMark){
				student[i].averageMark=temp;
				student[i].averageMark=student[j].averageMark;
				student[j].averageMark=temp;
				
			}
			
			
			
		}
		
		
		
	}
	cout<<"Average Mark liiisttttttt :"<<endl;
	for(int i=0;i<studentCount;i++){
	
		cout<<student[i].averageMark<<setw(18);
		
	}
	
	
	
}


int main(){
	int i;
cout<<"Enter no of students  :";
cin>>studentCount;
cout<<endl;

if (studentCount<=0 ||studentCount>40)	{
	cout<<"Enter valid student no"<<endl;
}
	else{
		for(i=0;i<studentCount;i++){
			cout<<"enter Student name :";
			cin>>student[i].name;
			cout<<"\n\n";
			
			cout<<"enter english Mark :";
			cin>>student[i].englishMark;
			
			cout<<"enter maths Mark :";
			cin>>student[i].mathsMark;
			
			cout<<"enter history Mark :";
			cin>>student[i].historyMark;
			
			cout<<"enter sciense Mark :";
			cin>>student[i].scienseMark;
			
			cout<<"Average Mark :"<<getAverage(student[i].mathsMark,student[i].historyMark,student[i].scienseMark,student[i].englishMark)<<endl;
			student[i].averageMark=getAverage(student[i].mathsMark,student[i].historyMark,student[i].scienseMark,student[i].englishMark);
		}
		
	
		 
		
	}
	
	
		double temp;
	for(int i =0;i<studentCount;i++){
		for (int j=i+1;j<studentCount;j++){
			if (student[i].averageMark>student[j].averageMark){
				temp=student[i].averageMark;
				student[i].averageMark=student[j].averageMark;
				student[j].averageMark=temp;
				
			}
			
			
			
		}
		
		
		
	}
	cout<<"Average Mark liiisttttttt :"<<endl;
	for(int i=0;i<studentCount;i++){
	
		cout<<student[i].averageMark<<setw(18);
		
	}
	
	
	
	
	
	
	
	
	
	
}
