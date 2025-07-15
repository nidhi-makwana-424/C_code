#include <iostream>

 using namespace std;

 inline void programme(){	
 	 
 	 double a,b;
 	 char Operator;
 	 
 	 cout<<"Enter First Value Of a: ";
 	 cin>>a;
 	 cout<<"Enter Second Value Of b: ";
 	 cin>>b;
 	 cout<<"Enter Operator(+,-,*,/): ";
 	 cin>>Operator;

 
 switch(Operator) {
 	case '+':
 	 cout<<"Addition: "<<a+b;
     break;
 		
 	case '-':
	 cout<<"Substraction: "<<a-b;
	 break;
	 
	case '*':
	 cout<<"Multiplication: "<<a*b;
	 break;
	 
	case '/':
	 if(b!=0){
	 	cout<<"Division: "<<a/b;
	 }else{
	 	cout<<"Invalid Division!!";
	 break;
}
	default:
	 cout<<"Error!!.. invalid Operator";  	
  
 }
 }
