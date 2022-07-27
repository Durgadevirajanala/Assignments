#include <Email.h>

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
