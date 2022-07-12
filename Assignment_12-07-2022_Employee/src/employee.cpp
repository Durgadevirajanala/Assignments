 #include <employee.h>
          void Display()
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
  
  int main()
  {
      fstream fin("data/employee.dat");
      int buf;
      char chr[]= "5 abcm 2500 fr";
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
      fin.write(reinterpret_cast<char *>(&chr),sizeof(chr));
	fin.close();
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
 }