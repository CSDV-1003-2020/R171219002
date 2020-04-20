#include <iostream> 
using namespace std; 
   
class Vehicle                                             //1st base class
{ 
  public: 
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    }
    void coutvehical()
    {
      cout<<"Function of Vehicle aka Base class";
    }
}; 
   
class FourWheeler                                          //2nd base class
{ 
  public: 
    FourWheeler() 
    { 
      cout << "This is a 4 wheeler Vehicle" << endl; 
    }
    void coutfourwheeler()
    {
      cout<<"Function of FourWheeler aka 2nd Base class";
    }
};

class Car: public Vehicle, public FourWheeler               //Derived Class
{ 
};

int main()
{
    Car obj;                                                //object of car
    coutvehical();
    coutfourwheeler();
    return 0;
}
