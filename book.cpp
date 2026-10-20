#include "Book.h"

Book::Book()
{
    name = "默认图书";
    isbn = "9780000000000";
    press = "未知出版社";
    price = 29.9;
    pages = 200;
    inLibrary = true;
}
Book::Book(string n, string i, string p, double pr, int pa, bool inLib)
{
    name = n;
    isbn = i;
    press = p;
    price = pr;
    pages = pa;
    inLibrary = inLib;
}

void Book::setName(string n){ name = n; }
void Book::setIsbn(string i){ isbn = i; }
void Book::setPress(string p){ press = p; }
void Book::setPrice(double pr){ price = pr; }
void Book::setPages(int pa){ pages = pa; }
void Book::setStatus(bool s){ inLibrary = s; }

string Book::getName() const { return name; }
string Book::getIsbn() const { return isbn; }
string Book::getPress() const { return press; }
double Book::getPrice() const { return price; }
int Book::getPages() const { return pages; }
bool Book::getStatus() const { return inLibrary; }

void Book::showInfo() const
{
    cout<<"====图书信息===="<<endl;
    cout<<"书名："<<name<<endl;
    cout<<"ISBN："<<isbn<<endl;
    cout<<"出版社："<<press<<endl;
    cout<<"价格："<<price<<"元"<<endl;
    cout<<"页数："<<pages<<"页"<<endl;
    if(inLibrary)
        cout<<"状态：在馆可借阅"<<endl;
    else
        cout<<"状态：已被借出"<<endl;
}
bool Book::checkIsbnValid(string isbnStr)
{
    if(isbnStr.size()!=13)
        return false;
    for(int i=0;i<isbnStr.size();i++)
    {
        if(!isdigit(isbnStr[i]))
            return false;
    }
    return true;
}
