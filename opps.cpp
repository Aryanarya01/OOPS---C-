// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher {
//     //properties
//     private:
//      double salary;
//    public:
//     string name;
//     string dept;
//     string subject;
//    //non-parameterized constructor
// //    Teacher(){
// //           dept="Computer Science";
// //    }
//    // parameterized constructor
//     Teacher(string name, string dept, string subject, double salary){
//         //object ki proberty ko access krne k liye this use krte hai
//            this->name=name;
//             this->dept=dept;
//             this->subject=subject;
//             this->salary=salary;
//    }

//    //copy constructor
//    Teacher(Teacher &origObj){
//     cout<<"I am custom copy constructor"<<endl;
//     this->name=origObj.name;
//     this->dept=origObj.dept;        
//     this->subject=origObj.subject;
//     this->salary=origObj.salary;
//    }
    
    
//     //methods=>functions()     (member functions)
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
//     //setter=>private value ko set krne k liye
//     // void setSalary(double newSalary) {
//     //     salary = newSalary;
//     // }
//     // //getter=> private value ko get krne k liye
//     // double getSalary() {
//     //     return salary;
//     // }


// void getInfo(){
//     cout<<"Name: "<<name<<endl;
//     cout<<"Department: "<<dept<<endl;
//     cout<<"Subject: "<<subject<<endl;
//     cout<<"Salary: "<<salary<<endl;
// }

// };

 

// int main(){
//     // Teacher t1;//constructor call
//     // t1.name = "John Doe";
//     // t1.subject = "C++";
//     // t1.setSalary(50000);
//     // cout<<t1.dept<<endl;
     
//     Teacher t1("Aryan","IT","Java",60000);
//     //t1.getInfo();
//     Teacher t2(t1);
//     t2.getInfo();
//     return 0;
// }



//                                           shallow/deep copy

// #include<iostream>
// #include<string>
// using namespace std;


// class Student{
//     public:
//     string name;
//     double* cgpaPtr;



//     Student(string name, double cgpa){
//         this->name=name;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }

//     // Student(Student &origObj){
       
//     //     this->name=origObj.name;
//     //     cgpaPtr = new double;
//     //     *cgpaPtr=*origObj.cgpaPtr;
//     // }


//     //destructor
//     ~Student(){
//         cout<<"Destructor called"<<endl;
//         delete cgpaPtr;
//          }

//     void getInfo(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"CGPA: "<<*cgpaPtr<<endl;
//     }

// };



// int main(){
//     Student s1("Aryan",5.74);
//     s1.getInfo();
//     // Student s2(s1);
//     // s1.getInfo();
//     // *(s2.cgpaPtr) = 9.0;
//     //  s1.getInfo();
//     //  s2.getInfo();
//     return 0;
// }




//                       inheritance

// #include<iostream>
// #include<string>
// using namespace std;

// class Person {
//     public:
//     string name;
//     int age;

//     //  Person(string name, int age){
//     //     this->name = name;
//     //     this->age = age; 
//     //  }

    
//     // Person(){
//     //      cout<<"I am parent constructor"<<endl;
//     // }
//     // ~Person(){
//     //     cout<<"I am parent destructor"<<endl;
//     // }
// };


// class Student : public Person{
//     //name,age,rollno
//     public:
//     int rollno;


//     Student(string name, int age,int rollno) : Person( name, age){
//         this->rollno=rollno;
//     }   
//     // ~Student(){
//     //     cout<<"I am Student destructor"<<endl;
//     // }
//     void getInfo(){
//         cout<<"name:"<<name<<endl;
//         cout<<"age:"<<age<<endl;
//         cout<<"rollno:"<<rollno<<endl;
//     }
// };

// int main(){
// Student s1("aryan arya",20,21);
// s1.getInfo();

//     return 0;
// }



//               multi-line inheritance

// #include<iostream>
// #include<string>    
// using namespace std;

// class Person {
//      public:
//      string name;
//      int age;
// };

// class Student : public Person{
//     public:
//     int rollno;
// };

// class GradStudent : public Student{
//     public:
//     string researchArea;
// };


// int main(){

// GradStudent s1;
// s1.name="Aryan";
// s1.researchArea="AI";
// cout<<s1.name<<endl;
// cout<<s1.researchArea<<endl;    
//     return 0;
// }



//    multiple inheritance


// #include<iostream>
// #include<string>
// using namespace std;

// class Student {
//      public:
//      string name;
//      int rollno;
// };

// class Teacher {
//      public:
//      string subject;
//      double salary;
// };

// class TA : public Student, public Teacher{
//     public:
    
// };


// int main(){
    
//     TA t1;
//     t1.name="Aryan";        
//     t1.subject="C++";
//     cout<<t1.name<<endl;
//     cout<<t1.subject<<endl;
//     return 0;
// }


//        hierarchical inheritance


// #include<iostream>
// #include<string>
// using namespace std;


// class Person {
//      public:
//      string name;
//      int age;
// };

// class Student : public Person{
//     public:
//     int rollno;
// };

// class Teacher : public Person{
//     public:
//     string subject;
//     double salary;
// };

// int main(){


//     return 0;
// }





//                                                        polymorphism
// #include<iostream>
// #include<string>
// using namespace std;
// //                       constructor overloading
// class Student{
//     public:
//     string name;

//     Student(){
//         cout<<"non-parameterized constructor called"<<endl;
//     }
//     Student(string name){
//         cout<<"parameterized constructor called"<<endl;
//         this->name=name;
//     }
// };


// int main(){

//     Student s1("aryan");


//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;

// //                       function overloading
// class Print{
//     public:
//     void show(int n){
//         cout<<"I am int: "<<n<<endl;
//     }
//     void show(char ch){
//         cout<<"I am char: "<<ch<<endl;
//     }
// };

// int main(){

//     Print p1;
//     p1.show(5);
//     p1.show('A');
//     return 0;
// }



//                  runtime polymorphism(function overriding)

// #include<iostream>
// #include<string>
// using namespace std;

// class Parent{
//     public:
//     void getInfo(){
//         cout<<"I am parent class"<<endl;
//     }
//     // virtual(){
//     virtual void hello(){
//         cout<<"Hello from parent class"<<endl;
//     }
// };

// class Child : public Parent{
//     public:
//     void getInfo(){
//         cout<<"I am child class"<<endl;
//     }

//     void hello(){
//         cout<<"Hello from child class"<<endl;
//     }
// };

// int main(){
//     // Child c1;
//     // c1.getInfo();

//     // Parent p1;
//     // p1.getInfo();

//     Child c1;
//     c1.hello();
//     return 0;
// }



//                     abstraction



// #include<iostream>
// #include<string>
// using namespace std;

// class Shape{//abstract class
//     virtual void draw()=0;//pure virtual function
// };

// class Circle : public Shape{
//     public:
//     void draw(){
//         cout<<"Drawing Circle"<<endl;
//     }
// };

// int main(){
//     Circle c1;
//     c1.draw();

//     return 0;
// }


//        static 

// #include<iostream>
// #include<string>
// using namespace std;

// // void fun(){
    
// //     static int count=0;//static variable
     
// //     cout<<"Count: "<<count<<endl;
// //     count++;
// // }


// class A {
//  public:
//  int x;
//  void incX(){
//     x = x + 1;
//  }
// };
// int main(){
    
//     A obj1;
//     A obj2;
//     obj1.x=100;
//     obj2.x=200;
    

//     cout<<obj2.x<<endl;
//     return 0;
// }



// #include<iostream>
// #include<string>
// using namespace std;

// class ABC{
//     public:
//     ABC(){
//         cout<<"I am constructor"<<endl;
//     }
//     ~ABC(){
//         cout<<"I am destructor"<<endl;
//     }
// };

// int main(){
//     if(true){
//        static ABC obj1;
//     }
//     cout<<"Main function ended"<<endl;

//     return 0;
// }



//ques

#include<iostream>
#include<string>
using namespace std;

class Base {
public:
void show() { cout << "Base" << endl; }
};
class Derived : public Base { 
public:
void show() { cout << "Derived" << endl; }
};
int main() {

Base* b;
Derived d; 
b = &d;
b->show();
return 0;
}
