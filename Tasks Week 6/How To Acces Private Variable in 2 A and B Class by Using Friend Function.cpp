#include<iostream>
using namespace std;

class StudentCard{
   		static int counter;
	public:
    
	    StudentCard() {
	        counter++;
		}
        
        static void Display(){
			cout<<"Total Objects: "<<counter<<endl;
		}		
};
int StudentCard::counter = 0;

int main (){
		StudentCard::Display();
	StudentCard S1;
	StudentCard S2;
	StudentCard S3;
	
	StudentCard::Display();
	return 0;
	
}


