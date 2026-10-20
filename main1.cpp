#include "Book.h"
int main()
{
    Book b1;
    b1.showInfo();
    Book b2("C++面向对象编程","9787111641247","机械工业出版社",79.0,450,true);
    cout<<"\n校验ISBN是否合法："<<(b2.checkIsbnValid(b2.getIsbn())?"合法":"非法")<<endl;
    b2.showInfo();
    b2.setPrice(85.0);
    b2.setStatus(false);
    cout<<"\n修改后："<<endl;
    b2.showInfo();
    return 0;
}
