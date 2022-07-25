#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <cstring>
#include <stack>

using namespace std;

class Stack1
{
	private:
	    list<string>ll;
	public:
	    char ch;
		string str;
		
		Stack1(){}
							 
		list<string>::iterator itr=ll.begin();
		
		void content(int argc,char* argv[]);
};
