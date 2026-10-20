#include "Student.h"

Student::Student()
{
    stuId = "000000";
    name = "匿名学生";
    borrowCount = 0;
}
Student::Student(string id, string n, int cnt)
{
    stuId = id;
    name = n;
    borrowCount = cnt;
}
void Student::setStuId(string id){ stuId = id; }
void Student::setName(string n){ name = n; }
void Student::setBorrowCnt(int cnt){ borrowCount = cnt; }
string Student::getStuId() const { return stuId; }
string Student::getName() const { return name; }
int Student::getBorrowCnt() const { return borrowCount; }
bool Student::borrowBook(Book &book)
{
    if(!book.getStatus())
    {
        cout<<"借书失败！图书已经被借出！"<<endl;
        return false;
    }
    if(borrowCount >=5)
    {
        cout<<"借书失败！该学生借书数量已达上限！"<<endl;
        return false;
    }
    book.setStatus(false);
    borrowCount++;
    cout<<"借书成功！学生："<<name<<" 借到《"<<book.getName()<<"》"<<endl;
    return true;
}
void Student::showStuInfo() const
{
    cout<<"====学生信息===="<<endl;
    cout<<"学号："<<stuId<<endl;
    cout<<"姓名："<<name<<endl;
    cout<<"当前已借图书："<<borrowCount<<"本"<<endl;
}
