/*Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.
*/
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
protected:
    int rollno;
    string name;

public:
    void set()
    {
        cout << "Enter Roll no.\t    ";
        cin >> rollno;
        cout << "Enter Student name\t";
        cin >> name;
    }
    void show()
    {
        cout << "\n------------------------------\n";
        cout << "****** Student Marklist ******";
        cout << "\n------------------------------\n";
        cout << "Roll No.\t\t" << rollno;
        cout << "\nStuden name\t" << name;
    }
};
class StudentExam : public Student
{
protected:
    int m1, m2, m3, m4, m5, m6;

public:
    void setmarks()
    {
        cout << "\nEnter marks for subject 1\t";
        cin >> m1;
        cout << "\nEnter marks for subject 2\t";
        cin >> m2;
        cout << "\nEnter marks for subject 3\t";
        cin >> m3;
        cout << "\nEnter marks for subject 4\t";
        cin >> m4;
        cout << "\nEnter marks for subject 5\t";
        cin >> m5;
        cout << "\nEnter marks for subject 6\t";
        cin >> m6;
    }

    void showmarks()
    {
        cout << "\n\nMarks of subject 1\t: " << m1 << endl;
        cout << "\nMarks of subject 2\t: " << m2 << endl;
        cout << "\nMarks of subject 3\t: " << m3 << endl;
        cout << "\nMarks of subject 4\t: " << m4 << endl;
        cout << "\nMarks of subject 5\t: " << m5 << endl;
        cout << "\nMarks of subject 6\t: " << m6 << endl;
    }
};

class StudentResult : public StudentExam
{
private:
    float total = 0, percentage;

public:
    void calper()
    {
        total = (m1 + m2 + m3 + m4 + m5 + m6);
        percentage = float(total / 6);
    }
    void showper()
    {
        cout << "\n\nTotal percentage\t " << percentage;
    }
};
int main()
{
    int n, i;
    cout << "Enter No. of student you want?\t";
    cin >> n;
    StudentResult *s1;
    s1 = new StudentResult[n];
    for (i = 0; i < n; i++)
    {
        s1[i].set();
        s1[i].setmarks();
    }
    for (i = 0; i < n; i++)
    {
        s1[i].show();
        s1[i].showmarks();
        s1[i].calper();
        s1[i].showper();
    }
    delete s1;
    return 0;
}