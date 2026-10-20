#include<iostream>
using namespace std;

class A{
		private:
			int age;
			string name;
		public:
			A(int a, string n){
				age = a;
				name = n;
			}
			friend class B;
};

class B{
		public:	
			void Display(A obj){
				cout<<"Name : "<<obj.name<<endl;
				cout<<"Age : "<<obj.age<<endl;
			}
};

int main(){
	A a(18, "Ahmad");
	B b;
	b.Display(a);
	return 0;
}
