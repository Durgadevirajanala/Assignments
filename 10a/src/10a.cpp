#include<iostream>
#include<cstring>
using namespace std;
int main(int argc,char *argv[])
{
        int i;
        try
        {
                if(argc>=2)
                {
                        for(i=0;i<argc;i++)
                        {
                                printf("argc[%d]=%s\n",i,argv[i]);
                        }
                }
                else
                {
                        throw argc;
                }
        }
        catch(int argc)
        {
                cout<<"error message:Insufficient arguments"<<endl;
        }
        return 0;
}