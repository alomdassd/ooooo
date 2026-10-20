#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>
using namespace std;

class Book
{
private:
    string name;     
    string isbn;     
    string press;    
    double price;    
    int pages;       
    bool inLibrary;

public:
    Book();
    Book(string n, string i, string p, double pr, int pa, bool inLib);
    void setName(string n);
    void setIsbn(string i);
    void setPress(string p);
    void setPrice(double pr);
    void setPages(int pa);
    void setStatus(bool s);
    string getName() const;
    string getIsbn() const;
    string getPress() const;
    double getPrice() const;
    int getPages() const;
    bool getStatus() const;
    void showInfo() const;
    bool checkIsbnValid(string isbnStr);
};
#endif
