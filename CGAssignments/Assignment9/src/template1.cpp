#include <template.h>

template<class t1>
t1 add(t1 a,t1 b,t1 c)
{
	return a+b+c;
}
template<class t2>
t2 concat(t2 a,t2 b,t2 c)
{
	return a+b+c;
}
int main()
{
	cout<<"add of int: "<<add<int>(10,20,30)<<endl;
	cout<<"add of string: "<<concat<string>("Seetha " ,"Geetha " ,"Likitha")<<endl;
	return 0;
}
