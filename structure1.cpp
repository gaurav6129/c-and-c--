#include <iostream>
using namespace std;
struct student;
{
    int roll_number;
    char branch;
    float marks;
};
int main()
{
    struct student gaurav;
    gaurav.roll_number = 14;
    gaurav.branch = "T";
    gaurav.marks = 99;
    cout << "gaurav ka roll number" << gaurav.roll_number << endl;
    cout << "gaurav ka branch" << gaurav.branch << endl;
    cout << "gaurav ka marks" << gaurav.marks << endl;
    return 0;
}
