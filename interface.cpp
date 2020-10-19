#include <iostream>
using namespace std;

struct resource_cdata
{
	resource_cdata(const int &a_) : a(a_) {}
		
	const int &a;
};

struct resource_data
{
	resource_data(int &a_) : a(a_) {}
	
	int &a;
};

class resource
{
public:
	resource(int a_) : a(a_), cdata(a), data(a){}
	
	void print() { cout << "this->a: " << this->a << endl; }
	
	const resource_cdata cdata;
	const resource_data data;

private:
	int a;
};



int main()
{
   cout << "Hello World" << endl;
	resource r(1);
	cout << "readonly cdata.a: "<< r.cdata.a << endl;
	r.data.a = 8;
	cout << "readwrite data.a: "<< r.data.a << endl;
	r.print();
   return 0;
}
