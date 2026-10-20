#include<iostream>
using namespace std;

class Student{
		private:
			// Non Static
			string name;
		public:
			// Static
			static int count;
			// Default Constructor
			Student(){
				count ++;
			}
			// Setter 
			void SetName(string n){
				name = n;
			}
			// Display
			void Display(){
				cout<<"Name: "<<name<<endl;
				cout<<"Total Students: "<<count<<endl;
			}
			// Static Function
			static void StaticDisplay(Student obj);	
};

int Student::count = 0;

void Student::StaticDisplay(Student obj){
	cout<<"Name: "<<obj.name<<endl;
	cout<<"Total Students: "<<count<<endl;
}

int main(){
	
	cout<<"Total Students: "<<Student::count<<endl;
	
	Student s1;
	s1.SetName("A");
	Student::StaticDisplay(s1);
	
	Student s2;
	s2.SetName("B");
	Student::StaticDisplay(s2);
	
	Student s3;
	s3.SetName("C");
	Student::StaticDisplay(s3);
	return 0;
}
