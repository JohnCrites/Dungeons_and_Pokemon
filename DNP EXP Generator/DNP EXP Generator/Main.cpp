/*This program was created by John Crites and Tanner Sanders.
The purpose of this specific .cpp is to generate EXP in 
our Dungeons and Pokemon rendition. Comments will be posted
where we feel clarification is needed. You must obtain
permision from one of us if you would like to use, duplicate,
or change the program in any way*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	double a, t, b, lvl;
	double party, effort, expz;
	int status, owner;

	cout<<"Is the pokemon wild or owned?\n ";
	cout<<"\t 1 wild\n ";
	cout<<"\t 2 owned\n ";
	cin>>status;

	if (status == 1) //checking for wild pokemon
		a=1;
		//applying experience multiplier
	else//checking for owned pokemon
		a=1.5;
		//applying experience multiplier
	cout<<"What is the level of the pokemon you defeated? \n";
	cin>>lvl;
	cout<<"what is the effort value? \n";
	cin>>effort;
	cout<<"how many pokemon participated in the battle? \n";
	cin>>party;
	cout<<"Are you the original Pokemon's owner? \n";
	cin>>owner;
	cout<<"\t 1 yes\n ";
	cout<<"\t 2 no\n ";
	if (owner==1)
		t=1;
	else
		t=1.5;

	cout<<fixed<<setprecision(2);

	expz = ((a*t*effort*lvl)/(7*party));
	cout<<"Exp for the battle is: "<<expz<<endl;

	system ("pause");
	return 0;


}