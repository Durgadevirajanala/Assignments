#include<iostream>
#include<vector>
#include<thread>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
class Account {
	private:
	   string name;
	   string bankname;
	   int balance;
	public:
	   Account(){}
	   Account(string n,string bn,int b){
	     name=n;
		 bankname=bn;
		 balance=b;
	   }
	  bool deposit(int a){
	  	if(a>0){
			this->balance+=a;
			return true;
		}
		return false;
	  }
	  string getUsername(){
	  return name;
	  }
	  bool withdraw(int a){
	  
	  	if(this->balance>a){
			this->balance-=a;
			return true;
		}
		return false;
	  }
	  string getbank(){
	  return bankname;
	  }
	  int getAmount(){
	  return balance;
	  }
};
class Login : public Account{
	private:
		string name;
		string pass;
		Account acc;
	public:
	    Login(){}
		Login(string n,string p,Account a){
		   name=n;
		   pass=p;
		   acc=a;
		}
		Account getAcc(){
		return acc;
		}
		string getuser(){
		return name;
		}
		string getpass(){
		return pass;
		}
		void setPass(string p){
		pass=p;
		}
};
int main()
{
//cout<<"first"<<"\n";
ifstream fin("user.txt");
ifstream fin1("login.txt");
string num,T,curr_user="";
int j=0;
vector<Account> vec;
vector<Login> vec1;
string str[10];
//cout <<"before"<<"\n";
while(getline(fin,num)){
//cout <<num<<"\n";
stringstream X(num);
if(num.length()>1){
//cout << num <<"\n";
j=0;
while(getline(X,T,' ')){
str[j++]=T;
}
cout << str[0] << " " << str[1]<< " " << str[2] <<"\n";
Account a(str[0],str[1],stoi(str[2]));
Login l(str[0],"",a);
vec.push_back(a);
vec1.push_back(l);
}
}
while(getline(fin1,num)){
stringstream X(num);
if(num.length()>1){
j=0;
while(getline(X,T,' ')){
str[j++]=T;
}
for(int i=0;i<vec1.size();i++){
	if(vec1.at(i).getuser()==str[0]){
		vec1.at(i).setPass(str[1]);
	}
}
}
}
cout << vec.at(0).getUsername()<<"\n";
cout << vec1.at(0).getpass() <<"\n";
int in=0,bal,q=0;
string user,pass;
Login l;
//thread t1(Account::getAmount,3);
//thread t2(Account::deposit,3);
while(1){
cout<< "Menu - Enter your choice \n1.Login\n2.Account_details\n3.Deposit\n4.WithDraw\n5.Balance\n6.logout\n";
cin >> in;
switch(in){
case 1: cout << "Enter username and password \n";
cin >>user;
cin >>pass;
q=0;
for(int i=0;i<vec1.size();i++){
if(vec1.at(i).getuser()==user && vec1.at(i).getpass()==pass){
curr_user=user;
q=1;
l=vec1.at(i);
cout <<"login successful\n";
}
}
if(q!=1){
curr_user="";
cout <<"login unsuccessful\n";
}
break;
case 2: if(curr_user.length()>0) {
cout << "User Name : " << l.getuser() <<"\n";
cout << "Balance : " << l.getAcc().getAmount()<<"\n";
}else{ cout <<" login to see details \n";}
break;
case 3:if(curr_user.length()>0) {
cout << "Balance before : " << l.getAcc().getAmount() <<"\n";
int amo;
cout << "Enter amount to deposit\n";
cin >> amo;
bool b1=l.getAcc().deposit(amo);
//t2.join();
cout << b1 << "\n";
cout << "Balance : " << l.getAcc().getAmount()<<"\n";
}else{ cout <<" login to see details \n";}
break;
case 4: if(curr_user.length()>0) {
cout << "Balance before : " << l.getAcc().getAmount() <<"\n";
int amo;
cout << "Enter amount to withdraw\n";
cin >> amo;
bool b=l.getAcc().withdraw(amo);
cout << b << "\n";
if(b)
cout << "Balance : " << l.getAcc().getAmount()<<"\n";
else
cout << "Insufficent balance \n";
}else{ cout <<" login to see details \n";}
break;
case 5: cout <<"Balance: "<<l.getAcc().getAmount()<<"\n";
break;
case 6: curr_user="";
cout <<"logout successful\n";
break;
}
}
return 0;
}

