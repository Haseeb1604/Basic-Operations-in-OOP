#include <iostream>
#include <string>
using namespace std;
class Random{
	public:
		static int reverse(int num){
			int rem,reverseVal=0;
			while(num!=0){
				rem=num%10;      
			    reverseVal = reverseVal*10+rem;    
			    num/=10;
			}
			return reverseVal;	
		}
};

main(){
	int num;
	cout<<"Enter Number to Reverse\n ";
	cin>>num;
	cout<<"Reverse of "<<num<<" is "<<Random::reverse(num);
}
