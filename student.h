#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Book.h"
using namespace std;

class Student
{
private:
    string stuId;    
    string name;     
    int borrowCount; 
public:
    Student();
    Student(string id, string n, int cnt);

    void setStuId(string id);
    void setName(string n);
    void setBorrowCnt(int cnt);

    string getStuId() const;
    string getName() const;
    int getBorrowCnt() const;
    bool borrowBook(Book &book);
    void showStuInfo() const;
};
#endif
