#include<iostream>
using namespace std;

class base {
protected:
	int x;
public:
	base(int i) {
		this->x = i;
		cout << "in base:"<<x<<"\n";
	}
	base() {
		cout << "in base default constructor:\n";
	}
	int get_x() {
		return this->x;
	}

	void set_x(int _x) {
		this->x = _x;
	}
};

class derived_1 : virtual public base {
protected:
	int d1;
	int xxx;//If we create a variable with name xxx here in this derived class (derived_1)...
public:
	derived_1() :base(10), d1(0) {
		cout << "in derived_1\n";
	}
	int get_d1() {
		return this->d1;
	}
	void set_d1(int _d1) {
		this->d1 = _d1;
	}
};

class derived_2 :virtual  public base {
protected:
	int d2;
	int xxx;//And we create another variable with same name (xxx) in this class too (derived_2)...
public:
	derived_2() :base(20), d2(0) {
		cout << "in derived_2\n";
	}
	int get_d2() {
		return this->d2;
	}
	void set_d2(int _d2) {
		this->d2 = _d2;
	}
};

class derived_3 : public derived_1, public derived_2 {
protected:
	int d3;
public:
	//it implies that our variables with same name (xxx) that we created in different classes have been inherited here
	derived_3():base(100){
		cout << "in derived_3\n";
	}
	int get_d3() {
		return this->d3;
	}
	void set_d3(int _d3) {
		this->d3 = _d3;
	}
};

int main() {
	derived_3 ob3;
	//Now, How shall we access those two different variables with same name (xxx) attarched to this object ob3????
	//I shall be grateful for the example that responds me dear sir @iut-cse-4301
	
	//ob3.set_x(0);
	ob3.set_d1(1);
	ob3.set_d2(2);
	ob3.set_d3(3);
	//cout << ob3.get_x();
	getchar();
	return 0;
}

