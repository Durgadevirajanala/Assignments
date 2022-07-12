#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <cstring>
#define BUF_Size 2000
using namespace std;

class Employee{
	private:
		string empid;
		string name;
		int sal;
		string role;
	public:
		Employee(){}
		Employee(string e,string n,int s,string r)
		{
			empid=e;
			name=n;
			sal=s;
			role=r;
		}
		void display()
		{
			cout<<"emp ID: "<<empid<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"salary: "<<sal<<endl;
			cout<<"role: "<<role<<endl;
		}
		string getEid(){
			return empid;
		}
		string getName(){
			return name;
		}
		int getSal(){
			return sal;
		}
		string getRol(){
			return role;
		}
};
int main()
{
	fstream fin;
	int buf;
	char chr[]= "5 abcm 2500 fr\n6 xyz 1500 HR";
	string num,T;
	int j=0;
	vector<Employee> vec;
	string str[10];
	int pid;
	pid=fork();
	if(pid==0){
	cout<<"Child Starts"<<endl;
    fin.open("data/employee.dat",ios::out);
	if(!fin){
	cout<<"Unable to open file"<<endl;
	exit(0);
	}	
	fin.write(reinterpret_cast<char *>(&chr),sizeof(chr));
	fin.close();
	cout<<"Child terminates"<<endl;
	}
	else
	{
		wait((int *)0);
		cout<<"Parent Starts"<<endl;
		fin.open("data/employee.dat",ios::in);							
		if(!fin)
	    {
			cout<<"\nUnable to open the file"<<endl;
			exit(0);
		}
		while(getline(fin,num)){
			 cout << num <<endl;
			 stringstream X(num);
			 if(num.length()>0){
			   	j=0;
			    while(getline(X,T,' ')){
		           str[j++]=T;
			  	}
			    Employee e(str[0],str[1],stoi(str[2]),str[3]);
			    vec.push_back(e);
			}
		}		
		fin.close();
		for(Employee e:vec){
			e.display();
		}
		cout<<"Parent terminates"<<endl;
		}

return 0;
}
