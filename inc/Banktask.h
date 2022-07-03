#include <iostream>
#include <vector>
#include <thread>
#include <fstream>
#include <sstream>
#include <string>

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
       bool Account ::deposit(int a);
       
      string getUsername(){
      return name;
       }
      bool Account::withdraw(int a);
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
      void::setPass(string p);
	 
 };
