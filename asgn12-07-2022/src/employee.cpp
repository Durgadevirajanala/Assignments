
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
		void Display()
		{
			cout<<"emp ID: "<<empid<<endl;
			cout<<"name: "<<sal<<endl;
			cout<<"salary: "<<name<<endl;
			cout<<"role: "<<role<<endl;
		}
		string getEid(){
			return empid;
		}
		string getName(){
			return name;
		}
};
int main()
{
	fstream fin("data/employee.dat");
	int buf;
	char chr[]= "5 abc 12365 HR"
	string num,T;
	int j=0;
	vector<Employee> vec;
	string str[10];
	int pid;
	pid=fork();
	if(pid==0){
	cout<<"Child Starts"<<endl;
    fin.open("data/employee.dat");
	if(!fin){
	{
	cout<<"Unable to open file"<<endl;
	exit(0);
	}
	while(getline(fin,num)){
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
	f.write(reinterpret_cast<char *>(&chr),sizeof(chr));
	f.close();
	cout<<"Child terminates"<<endl;
	}
	else
		{
			wait((int *)0);
			cout<<"Parent Starts"<<endl;

			fin.open("data/employee.dat");
									
			if(!fin)
	    	{
				cout<<"\nUnable to open the file"<<endl;
				exit(0);
			}
			cout<<"Sizeof buf : "<<sizeof(buf)<<endl;
			fin.read(reinterpret_cast<char*>(&buf),sizeof(buf));
			cout<<"\nRead characters from the file "<<buf<<endl;
		fin.close();
		cout<<"Parent terminates"<<endl;
		}
	return 0;
}
