#include<iostream>
  using namespace std;
   class Rectangle{
	    private:
	float length;
        float width;
	 public:
	 void setlength(float l)
	
		 length= l;
	 
    void setwidth(float w)
    {
	    width=w;
    }
    float perimeter()
    {
   return (length+width)
float area()
{
	return (length+width);
}

    void show(){
	 cout<<"\nlength: "<<length;
	 cout<<"\nwidth: "<<width;
	 cout<<"\nperimeter: "<<perimeter();
	 cout<<"\narea: "<<area();
	  }
	 static int sameArea(Rectangle rec1, Rectangle rec2){
	 if (rec1.area()==rec2.area())
					    
	  return 1;
	 else
	   return 0;
	   }
};
