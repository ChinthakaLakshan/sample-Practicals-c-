#include <iostream>
using namespace std;

int main() {

  int noOfStudents;

  cout << "Enter no of students : ";
  cin >> noOfStudents;
  cout << endl << endl;

  if (noOfStudents < 1 || noOfStudents > 40 ) {
    cout << "No of students should be more than 0 and less than or equal to 40" << endl;
  } else {

      string names[noOfStudents];
      double maths[noOfStudents], science[noOfStudents], history[noOfStudents], english[noOfStudents];

      for(int i = 0 ; i < noOfStudents; i++) {
        cout << "Enter the student " << i+1 << " name : ";
        cin >> names[i];
        cout << "Enter Mathematics Mark : ";
        cin >> maths[i];
        cout << "Enter Science Mark : ";
        cin >> science[i];
        cout << "Enter History Mark : ";
        cin >> history[i];
        cout << "Enter English Mark : ";
        cin >> english[i];
        cout << endl << endl;
      }

      cout << "--------------------------Student Details-------------------------" << endl << endl;

      double total[noOfStudents];

      for (int y = 0; y < noOfStudents; y++) {
        total[y] = maths[y] + science[y] + history[y] + english[y];
      }

      for(int x = 0; x < noOfStudents ; x++) {
        cout << "Student name : " << names[x] << endl;
        cout << "Mathematics Mark : " << maths[x] << endl;
        cout << "Science Mark : " << science[x] << endl;
        cout << "History Mark : " << history[x] << endl;
        cout << "English Mark : " << english[x] << endl;
        cout << "Total of Marks : " << total[x] << endl << endl;
        
      }
    
  }

  return 0;
}
