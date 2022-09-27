#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int r1,r2,b,a,c;
	cout<<"Enter a number:";
	cin>>a>>b>>c;
	r1=(-b+sqrt(b*b-4*a*c))/(2*a);
	r2=(-b-sqrt(b*b-4*a*c))/(2*a);
	cout<<"this is"<<r1<<" "<<r2;
	return 0;
	
}
