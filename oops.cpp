#include<iostream>
#include<string>
using namespace std;

class Teacher{


private:
    double salary;
public:
    //non parametrized
    Teacher(){
        dept = "Computer science";
    } 
    
    //parametrized
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;
    
void changeDept(string newDept){
    dept = newDept;
}

void getInfo(){
    cout<<"name: "<< name<< endl;
    cout<<"dept: "<<dept<< endl;

}
};

int main() {
    Teacher t1("Tania", "Computer science", "C++", 25000);
    //t1.getInfo();

    Teacher t2(t1);//defaulr copy constructor
    t2.getInfo();
    
    return 0;


}