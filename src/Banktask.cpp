#include <iostream>
#include <vector>
#include <thread>
#include <fstream>
#include <sstream>
#include <string>
#include <Banktask.h>

using namespace std;

   bool Account::deposit(int a){
	 if(a>0){
	  this->balance+=a;
	return true;
	   }
	 return false;
	    }
		bool withdraw(int a){

         if(this->balance>a){
           this->balance-=a;
           return true;
         }
         return false;
       }
void Login::setPass(string p){
   pass=p;
     }
