#include <iostream>
using namespace std;





int main() {
int a[]={3,2,1};

int *p=a;


cout<<a<<endl;
cout<<&a[0]<<endl;
cout<<a[1]<<endl;
cout<<*p<<endl;
cout<<p[1]<<endl;
cout<<*(p+1)<<endl;
cout<<*(p+2)<<endl;
cout<<*(p+3)<<endl;
 }
