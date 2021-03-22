#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//cout<<"HELLO WORLD"
	/*
	Variables
	string characterName="jhon";
	int characterAge;
	characterAge=10;
	cout<<"there once was a man name "<<characterName<<endl;
	cout<<"he was "<<characterAge<<" years old"<<endl;
	characterName="mike";
	cout<<"he liked the name "<<characterName<<endl;
	cout<<"But didnot like the being 70"<<endl; */
	
	/*Data types
	char grade ='A';
	string phrase ="Giraffee";
	int age= 20;
	float gpa=2.0; //less decimal
	double gpa1=2.3; //more decimal
	bool ismale = true;
	cout<<grade<<endl; */
	
	//Working with string
	//string i sjust a plan text
/*	string phrase="giraffe Academy";
	cout<<phrase.length()<<endl;
	cout<<phrase[4]<<endl;
	phrase[0]='B';
	cout<<phrase<<endl;
	cout<<phrase.find("ffee", 0)<<endl;
	cout<<phrase.substr(8, 3)<<endl;  //substring
	string phrasesub;
	phrasesub=phrase.substr(8,3);
	cout<<phrasesub<<endl;
	*/
	
	// Working with numbers
	/*
	cout<<pow(2,3)<<endl;
	cout<<sqrt(36)<<endl;
	cout<<sqrt(43.3)<<endl;
	cout<<round(4.3)<<endl;
	cout<<round(4.8)<<endl;
	cout<<ceil(4.1)<<endl;
	cout<<floor(4.2)<<endl;
	cout<<fmax(8,9)<<endl;
	cout<<fmin(8,9)<<endl;
	*/
	//getting user input
	
//	int age;
//	cout<<"enter your age";
//	cin>>age;
	
//	cout<<"You are "<<age<< "years old"<<endl;
//	string name;
//	cout<<"enter your name";
//	getline(cin,name);
//cout<<"hello" <<name<<endl;
	
	//Building calculator
	
/*	int num1, num2;
	cout<<"enter first number";
	cin>>num1;
	cout<<"enter the second number";
	cin>>num2;
	//cout<<num1+num2;
	int num = num1+num2;
	cout<<num;\
	*/
	
	// Building a mad libs game
/*	string color, pluralNoun, celebrity;
	cout<<"enter a color";
	getline(cin,color);
	cout<<"enter a plural noun";
	getline(cin, pluralNoun);
	cout<<"Enter celebrity";
	getline(cin,celebrity);
	cout<<"Rose are" << color<<endl;
	cout<< pluralNoun<< "are blue"<<endl;
	cout<<"I love" <<celebrity<<endl;
	*/
	
	//Array
	int luckyNum[]={1,3,4,5,6,7,8};
	cout<<luckyNum[3]<<endl;
	luckyNum[10]=100;
	cout<<luckyNum[10];
	return 0;
}
