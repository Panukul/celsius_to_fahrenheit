#include<iostream>
#include<string>
using namespace std;
void main()
{
	char menu;
	string name =" ",pass =" ",logpass,loguser;
	
	do{
	cout<<"///////////////Menu///////////////\n";
	cout<<"1.Register\n";
	cout<<"2.Login\n";
	cout<<"3.Exit Program\n";
	cout<<"Enter Munu:";
	cin>>menu;
	switch(menu)
	{
	case '1' :
		cout<<"Register\n";
		cout<<"Input Username :";
		cin>>name;
		cout<<"Input Password :";
		cin>>pass;
		break;

	case '2' :
		cout<<"Login\n";
		cout<<"Input Username :";
		cin>>loguser;
		cout<<"Input Password :";
		cin>>logpass;
		if(logpass == pass && loguser==name)
		{
			cout<<"Username or Password correct ^_^\n";
		}
		else
		{
			cout<<"!!!!!Username or Password incorrect Please try again!!!!!\n";
		}
		break;

	case 'Q' :
		cout<<"Exit Program\n";
		break;
	}
	}while(menu!='Q');
}