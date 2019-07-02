#include<iostream>
using namespace std;
void main()
{
	
	int c;
	cout<<"Enter Celsius temperature: ";
	cin>>c;	
	float f;
	f=1.8*c+32;	
	cout<<"Fahrenheit = "<<f<<endl;
	cout<<"Now weather in Thailand is" <<((f<70)? " Cool " : " Hot ")<<endl;
}