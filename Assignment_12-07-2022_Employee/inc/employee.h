 #pragma once
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
          void Display();

};
