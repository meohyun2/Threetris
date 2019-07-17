#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include "Rank.h"
using namespace std;

User_Data::User_Data()
{
	UserNum = 0;
	string temp;
	ifstream in;
	in.open("score.txt");
	in >> temp;
	while (!in.eof())
	{
		uData.insert(temp, temp);
		UserNum++;
	}
}