#include <Email.h>


 bool isChar(const char character)
            {
                   return ((character >='a' && character <= 'z')|| (character >= 'A' && character <= 'Z'));

            }

            bool isDigit(const char character)
            {
                    return(character >= '0' && character <= '9');
                    }

                        bool isValidEmailId(string email)
                        {
                        if (!isChar(email[0]))
                        return 0;
                        int Atofset = -1;
                        int Dotofset = -1;
                        unsigned int length;
                        for(unsigned int i= 0; i<length;i++)
                        {
                        if(email[i]=='@')
                        Atofset = (int)i;
                        else if (email[i]== '.')
                        Dotofset = (int)i;
                        }
                        if(Atofset== -1 || Dotofset == -1)
                        return 0;
                        if(Atofset> Dotofset)
                        return 0;
                        return!(Dotofset >=((int)length -1));
                        }

int main(int argc,char*argv[])
{
   
//     char *fname = argv[1];
     
     if(argc != 2)
	{
		cout<<"Warning: Need one more argument"<<endl;
	}
//        bool ischar();
  //      bool isDigit();
        bool isValidEmail(string);
        cout<<"Enter email id:"<<endl;
        getline(cin, email);
       
       string test = email;   
       
        try     // Error handling
   {
   if(isValidEmail(test))
      cout<<"Email id is Valid:"<<endl;
      
     else
           throw "character";

        }
       catch (char character)
{
     cout<<"\n Error caught......\n Email id is Invalid:"<<endl;
 }
   catch(...)
 {
   cout<<"Default Exception error"<<endl;
    
}

        Dispfile();
        return EXIT_SUCCESS;
     }
     
         


           

