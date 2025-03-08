#include<iostream>
using namespace std;
    
class BasicCar
{
    public:
	virtual void start() // virtual means it is virtual it will not be inherit
	{
		cout<<"BasicCar Started"<<endl;
	}
	
};
    
class AdvanceCar:public BasicCar
{
    public:
	void start()
	{
		cout<<"AdvanceCar Started"<<endl;
	}
	
};
    
int main()
{
	BasicCar *ptr=new AdvanceCar(); 
	ptr->start(); // adv car fun will work bcz basic car func is virtual
	    
}
    