#include <iostream>
using namespace std;

class Q{
public:
	void setQ(int);
	void printQ()	{ }
	int operateQ(int)	{ }
	int qData = 100;
};

void Q::setQ(int input)
{

}

int main()	{
	Q q;
	cout << q.qData;
}