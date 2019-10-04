
#include <iostream>
using namespace std;

class Student{

private:
    string lastName, firstName, matriculationDate, birth, standing;
    double gpa; int credit;

public:
    //Accesor
    string getlastName();
    string getFirstName();
    string getBirth();
    string getStanding();
    string getmatriculationDate();
    int getCredit();
    double getGpa();
    void getOutput();
    
    //Mutator
    void setlastName(string n);
    void setFirstName(string n);
    void setBirth(string n);
    void setmatriculationDate(string n);
    void setStanding(int n);
    void setgpa (double n);
    void setCredit (int n);
};

string Student::getlastName(){
    return lastName;
}

string Student::getFirstName(){
   return firstName;
}
string Student::getBirth(){
    return birth;
}
string Student::getStanding(){
    return standing;
}
string Student::getmatriculationDate(){
    return matriculationDate;
}

int Student::getCredit(){
    return credit;
}
double Student::getGpa(){
    return gpa;
}

void Student::setlastName(string n){
     lastName = n;
}

void Student::setFirstName(string n){
    firstName = n;
}

void Student::setBirth(string n){
    birth = n;
}

void Student::setmatriculationDate(string n){
    matriculationDate = n;
}

void Student::setgpa(double n){
    gpa = n;
}

void Student::setCredit(int n){
    credit = n;
}

void Student::setStanding(int n){
    standing = n;
    if ( n >= 0 && n < 15){
        standing = "Lower Freshman";
    }
    else if ( n >= 15 && n < 30 ){
        standing = "Upper Freshman";
    }
    else if ( n >= 30 && n < 45){
        standing = "Lower Sophomore";
    }
    else if ( n >= 45 && n < 60 ){
        standing = "Upper Sophomore";
    }
    else if ( n >= 60 && n < 75 ){
        standing = "Lower Junior";
    }
    else if ( n >= 75 && n < 90 ){
        standing = "Upper Junior";
    }
    else if ( n >= 90 && n < 105 ){
        standing = "Lower Senior";
    }
    else{
        standing = "Upper Senior";
    }
    if ( n < 0){
        cout << "Invalid Credit Amount." << endl;
        cout << endl;
        getOutput();
    }
}
void Student::getOutput() {
    Student temp;
    string lastName, firstName, matriculationDate, birth, standing;
    double gpa; int credit;
    cout << "Input Student LastName and FistName\n";
   cin >> lastName;
   cin>> firstName;
    temp.setlastName(lastName);
    temp.setFirstName(firstName);
   cout << "Input Student birth and Matriculation Date\n";
    cin >> birth >> matriculationDate;
    temp.setBirth(birth);
    temp.setmatriculationDate(matriculationDate);
    cout << "Input Student GPA and Credit\n";
    cin >> gpa >> credit;
    temp.setgpa(gpa);
    temp.setCredit(credit);
    temp.setStanding(credit);
    cout << endl;
    cout << "Name: " << temp.getlastName() << " " << temp.getFirstName() << endl;
    cout << "Date of Birth: " << temp.getBirth() << endl;
    cout << "Matriculation Date: "<< temp.getmatriculationDate()<< endl;
    cout << "GPA: " << temp.getGpa()<< endl;
    cout << "Credit: " << temp.getCredit()<< endl;
    cout << "Standing: " << temp.getStanding()<< endl;
}
int main() {
    
    
    Student s1;
    s1.getOutput();

    return 0;
}
