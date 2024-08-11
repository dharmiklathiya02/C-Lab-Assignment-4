#include<iostream>
using namespace std;
class object{
    int x,y;
    public:
        void setvalue(int i,int j){
            x=i;
            y=j;
        }
        void sum(object obj1,object obj2){
            x=obj1.x+obj2.x;
            y=obj1.y+obj2.y;
        }
        void display(){
            cout<<"x value is"<<x<<endl;
            cout<<"y value is"<<y<<endl;
        }
};
int main(){
    object obj1,obj2,obj3;
    obj1.setvalue(10,20);
    obj2.setvalue(30,40);
    obj3.sum(obj1,obj2);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}