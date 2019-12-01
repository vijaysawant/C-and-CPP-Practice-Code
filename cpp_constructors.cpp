/******************************************************************************
Below code snipet demonstrate concept of constructor in cpp
1.Default 2.Parameteried and 3.Copy constructor
*******************************************************************************/

#include <iostream>
using namespace std;

class Demo
{
    public:
        int a, *ptr;
    Demo()
    { 
        cout<<"Inside default constructor"<<endl;
        a = 0; 
        ptr = &a;
        cout<<"a="<<a<<" *ptr="<<(*ptr)<<endl;
    }
    Demo(int i)
    { 
        cout<<"Inside parameterised constructor"<<endl;
        a = i, 
        ptr = &a;
        cout<<"a="<<a<<" *ptr="<<(*ptr)<<endl;
    }
    Demo(Demo &ref_obj)
    { 
        cout<<"Inside copy constructor"<<endl;
        a = ref_obj.a;
        ptr = ref_obj.ptr;
		cout<<"a="<<a<<" *ptr="<<(*ptr)<<endl;
    }
};
int main()
{
    Demo obj;           // Call to default constructor
    Demo obj1(15);      // Call to parameterised constructor
    Demo obj2(obj1);    // Call to copy constructor
    //Demo obj2 = obj1; // Call to copy constructor
    return 0;
}

/*
Inside default constructor                                                                                                      
a=0 *ptr=0                                                                                                                      
Inside parameterised constructor                                                                                                
a=15 *ptr=15                                                                                                                    
Inside copy constructor                                                                                                         
a=15 *ptr=15  
*/
