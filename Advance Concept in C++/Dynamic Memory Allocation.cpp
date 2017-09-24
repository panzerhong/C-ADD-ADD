#include<iostream>
using namespace std;
class Dynami
{
	public:
		Dynami()
		{
			cout<<"Constructor called . \n";
		}
		~Dynami()
		{
			cout<<"Destrutor called.\n";
		}
		
};
int main()
{
	Dynami *d = new Dynami[5];
	delete[]d;
	return 0;
}
