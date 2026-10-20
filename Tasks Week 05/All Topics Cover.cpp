#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        int *age;
    public:
        Student(){
            age = new int(0);
        }
        Student(int a){
            age = new int(a);
        }
        Student(const Student &obj){
            // Shallow Copy
            //age = obj.age;
            // Deep Copy
            age = new int(*obj.age);
        }
        void SetAge(int a){
            *age = a;
        }
        int GetAge(){
            return *age;
        }
        void Display(){
            cout<<"Age : "<<*age<<endl;
        }
        ~Student(){
            cout<<"Destructor Called "<<*age<<endl;
            delete age;
            age = 0;
        }
};

void Temp(){
    int  a = 5;
    cout<<"A = "<<a<<endl;
    a++;
}

int main(){
    // Student *s = new Student;
    // Student s1(22);
    // Student s2(s1);
    // s2.SetAge(24);

    // s1.Display();
    // s2.Display();

    Temp();
    Temp();
    Temp();
    Temp();
    Temp ();
    return 0;
}
