#include <cstring>
#include <string>
#include <template.h>

template <typename T> class MyArrayClass
{
	private:
		char s[30];
	public:
		MyArrayClass(){};
		string uppercase();
};
template <typename T>string MyArrayClass<T>::uppercase()
{
	cout<<"enter lowercase:";
	cin>>s;

	for(int i=0;i<=strlen(s);i++)
	{
		if(s[i]>=97&&s[i]<=122)
		{
			s[i]=s[i]-32;
		}
	}
	return s;
}
int main()
{
	MyArrayClass<char> a;
	string s=a.uppercase();
	cout<<"uppercase:"<<s<<endl;
	return 0;
}
