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

M::M(int q = 0)	{
	data = q;
	number = 2;
}

int M::mystery(int q)	{
	data += q;
	return data;
}

int main()	{
	M mObject(2);
	M *mPtr = &mObject;

	cout << mObject.mystery(20) << endl;
	cout << mPtr->mystery(30);
}