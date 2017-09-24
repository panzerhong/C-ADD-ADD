#include<iostream>
using namespace std;

class rectangle
{
	public:
			//Constructor definiton
			rectangle (float l, float b)
			{
				length =1;
				breadth = b;
			}
			
			float Area()
			{
				return length *breadth;
		
			}
			private :
				float length;
				float breadth;
				
};

int main(void)
{
	rectangle obj1(15,3);
	rectangle obj2(7.5,5);
	rectangle *ptr;	// Creating pointer object which is used to point to class rectangle
	ptr = &obj2;
	
	cout<<"Rectangle have length and breadth as 15 and 3:\nArea = "<<ptr->Area()<<endl;
	
	return 0;
}
