#include <iostream>
#include <string>
#include <cstring>
#include <thread>
#include <vector>
#include <ostream>
#include <sstream>

using namespace std;

int validmail_count=0;
int i,s;
void validate(string s)
{
	if(isalnum(s[0]))
	{
		string s1=s.substr(s.length()-4);
		if(s1==".com" || s1==".edu")
		{
			cout <<s<<" - Valid"<<endl;
    //		char* ptr1=s[i];
			validmail_count++;
			cout<<validmail_count<<endl;
//			cout<<s[i]<<endl;
		}
		else
		{
			 cout <<s<<" - Not Valid"<<endl;
 		}
	}
	else
	{
		 cout <<s<<" -Not Valid"<<endl;
	}
}

int main(int argc, char* argv[])
{
	int i;
	char *ptr;
	//const char *s1=",";
//	thread t1(validate,"ls")
	string str;
	str=argv[1];
	string s[100],s1,T;
	stringstream X(str);
	int j=0;
	int m=0;
	if(str.length()>1)
	{
		j=0;
		while(getline(X,T,';'))
		{
			s[j++]=T;
			m+=1;
		}
	}
		cout<<"Number of entered email IDs are: "<<m<<endl;
	//  cout << s[1] <<"\n";
	for(int i=0;i<=m;i++)
	{
	thread* t1=new thread(validate,s[i]);
	}
	return 0;
}
