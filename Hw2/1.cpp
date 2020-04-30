#include <iostream>
using namespace std;

class M	{
public:
	M(int);
	int mystery(int);
private:
	int data;
	double number;
};

M::M(int q)	{
	data = q;
	number = 0.5;
}

int M::mystery(int q)	{
	data += q;
	return data * number;
}

int main()	{
	M stuff(44);
	cout << stuff.mystery(78);
}