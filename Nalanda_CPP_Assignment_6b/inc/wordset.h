#pragma once
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;
	 
class Wordset{
	private:
	vector<string>vlist;
	public:
int addmember(string s);
int deletemember(string s);
void displaylist();


};
