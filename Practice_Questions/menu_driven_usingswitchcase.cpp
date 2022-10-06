#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	int option;
	cout<<"menu\n";
	cout<<"1.Add\n2.Mul\n3.Sub\n4.Div\n";
	cout<<"Enter your choice:\n";
	cin>>option;
	cout<<"Enter a two number:";
    cin>>a>>b;
    switch(option){
    	case 1:c=a+b;
    	break;
    	case 2:c=a*b;
    	break;
    	case 3:c=a-b;
    	break;
    	case 4:c=a/b;
    	break;
    	
	}
    
	cout<<"The result is:"<<c<<endl;
	return 0;
	
	
	
}

















