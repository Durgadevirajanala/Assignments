#include <assig8d.h>
int main(int argc, char* argv[])
{
list<string>ll;
list<string>::iterator itr=ll.begin();
int j=0;
for(int i=1;i<argc;i++)
{
string str;
str=argv[i];
ll.insert(itr,str);
}
itr=ll.begin();
cout<<"Received Objects from Command Prompt"<<endl;
string s,T;
while(itr!=ll.end())
{
cout<<*itr++<<endl;
}
string s1[100];
list<string> ports;
list<string>::iterator itr1=ports.begin();
for(string i:ll){
	stringstream X(i);
	j=0;
	while(getline(X,T,':')){
		s1[j++]=T;
	}
	ports.insert(itr1,s1[1]);
}
ports.sort();
itr1=ports.begin();
cout <<"Sorted Port Numbers are "<<endl;
while(itr1!=ports.end())
{
  cout<<*itr1++<<endl;
}
//int n=0;
//cout <<"Enter number of ports to emter as an input "<<endl;
//cin >> n;
//string in;
//list<string> ports1;
//list<string>::iterator itr2=ports1.begin();
//while(n>0){
//	cin >>in;
//	ports1.insert(itr2,in);
//	n--;
//}
//ports.merge(ports1);
ports.sort();
itr1=ports.begin();
cout <<"Merged Port Numbers After Merging are "<<endl;
while(itr1!=ports.end())
{
	cout<<*itr1++<<endl;
}
string in1;
cout <<"Enter port number to search "<<endl;
cin >>in1;
if(binary_search(ports.begin(),ports.end(),in1)){
	itr=find(ports.begin(),ports.end(),in1);
	cout <<in1 <<" exists in list of ports , ports below that port are "<<endl;
	while(itr!=ports.end())
	{
		cout<<*itr++<<endl;
	}
}
else{
	cout<<in1 <<" not exists in list of ports"<<endl;
}
int c=0;
list<string> uports = ports;
uports.unique();
list<string>::iterator low,upp;
for(string p:uports){
	low=lower_bound(ports.begin(),ports.end(),p);
	upp=upper_bound(ports.begin(),ports.end(),p);
//	cout <<*low<<" ------- "<<*upp<<endl;
	if(low!=upp)
		c++;
}
//cout <<"Duplicate ports count: "<<c<<endl;
}
