#include <iostream>
using namespace std;

class object {
	public:
		virtual void calculate_area(float base, float height){

		}
};

class rectangle : public object {
	void calculate_area(float base, float height){
		cout << "Area: " << base * height << endl;
	}
};

class triangle : public object {
	void calculate_area(float base, float height){
		cout << "Area: " << (base * height) / 2 << endl;
	}
};

main(){
	int selection;
	float base, height;
	object *ptr;
	rectangle r1;
	triangle t1;
	cout << "1 -> Rectangle Area Calculate" << endl << "2 -> Triangle Area Calculate" << endl << "Please Choose One: ";
	cin >> selection;
	
	switch(selection){
		case 1:
			cout << "Base: ";
			cin >> base;
			cout << "Height: ";
			cin >> height;
			ptr = &r1;
			ptr->calculate_area(base, height);
			break;
		case 2:
			cout << "Base: ";
			cin >> base;
			cout << "Height: ";
			cin >> height;
			ptr = &r1;
			ptr = &t1;
			ptr->calculate_area(base, height);
			break;
		default:
			cout << "Incorrect selection" << endl;
			break;
	}
}