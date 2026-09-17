#include<bits/stdc++.h>
using namespace std;
class book{
private:
    string name;
    string auth;
    int id;
    float price;
    bool state;
public:
    book();//无参构造
    book(string name,string auth,int id,float price,bool state);//有参构造
    void str(string name,string auth,int id);//修改参数
    void pri(float price);//重新定价 修改参数
    void showbook();//展示参数
    string getbookName();//类内声明
};
book::book(){
    name="harrypotter";
    auth="J.K. Rowling";
    id=3333;
    price=1.414;
    state=true;
}
book::book(string name,string auth,int id,float price,bool state){
    this->name=name;
    this->auth=auth;
    this->id=id;
    this->price=price;
    this->state=state;
}
void book::str(string name,string auth,int id){
    this->name=name;
    this->auth=auth;
    this->id=id;
}
void book::pri(float price){
    this->price=price;
}
void book::showbook(){
    cout<<name<<" "<<auth<<" "<<id<<" "<<price<<" "<<state<<endl;
}
string book::getbookName(){
    return name;
}

int main(){
    book bo; //调用无参构造
    bo.str("To Live","YuHua",12305); //修改书籍信息
    bo.showbook();

    book bo1("20000 Leagues Under the Sea","Jules Verne",12306,17.421,false); //有参构造创建对象
    bo1.showbook();

    return 0;
}
