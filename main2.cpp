#include "Book.h"
#include "Student.h"

int main()
{
    Book book1("数据结构","9787302577731","清华大学出版社",59,340,true);
    Student s1("2026001","张三",0);
    s1.showStuInfo();
    book1.showInfo();
    s1.borrowBook(book1);
    cout<<"\n---借书之后状态---"<<endl;
    s1.showStuInfo();
    book1.showInfo();
    s1.borrowBook(book1);
    return 0;
}
