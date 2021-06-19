#include <iostream>
using namespace std;
class ObjectCounter {
	static int objCount; // Static Varaible to count number of object
	public:
		ObjectCounter(){
			objCount++; // when object is called the objCount will be increamented indicating the number of objects called
		}
		static void printObjCount(void){
			cout << "Total Number of Object:" << objCount<< "\n"; // Showing number of objects
		}
};

int ObjectCounter::objCount;

int main(){
	ObjectCounter OC1, OC2;
	ObjectCounter::printObjCount();
	ObjectCounter OC3;
	ObjectCounter::printObjCount();
	return 0;
}

