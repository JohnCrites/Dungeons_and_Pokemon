/* This is just a small practice on reading stats and data
from other files. This would make it significantly easier
to use individual stats for each of the pokemon, instead
of random stats for every pokemon. I'm also only using
random numbers for the input file, nothing is legit.*/


/******update*****3/23*****
I figured out the file reading operation. 
Now to get to writing files for every pokemon...
***************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string pokemon, type;
	ifstream infile;
	int hp, atk, dfc;

	cout<<"What is the wild pokemon?\n";
	cin>>pokemon;

	pokemon+=".txt";

	infile.open(pokemon);
	
	infile>>hp;
	infile>>dfc;
	infile>>atk;
	infile>>type;
	
	cout<<hp<<endl<<dfc<<endl<<atk<<endl<<type<<endl;

	system ("pause");
	return 0;


}