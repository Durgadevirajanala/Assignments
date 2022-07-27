#include <Email.h>

int main(int argc, char* argv[])
{
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
