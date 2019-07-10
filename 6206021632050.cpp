#include<iostream>
using namespace std;
void main()
{
	int score;
	cout<<"Enter score : ";
	cin>>score;
	if(score<=59 && score>=0)
	{
		cout<<"Grade F\n";
	}
	else if(score>=60 && score<=69)
	{
		cout<<"Grade D\n";
	}
	else if(score>=70 && score<=79)
	{
		cout<<"Grade C\n";
	}
	else if(score>=80 && score<=89)
	{
		cout<<"Grade B\n";
	}
	else if(score>=90 && score<=100)
	{
		cout<<"Grade A\n";
	}
	else
	{
		cout<<"ERROR\n";
	}
}
