#include<iostream>
using namespace std;
class conn{
    int sum;
    double sum;
    private:
        conn(int,int);
        conn(double,double); 
        void display(){
            cout<<"Sum is"<<sum;
        }
};
conn::conn(int a,int b){
    sum=a+b;
}
conn::conn(double a,double b){
    sum=a-b;
}
int main(){
    conn c1(29,40);
    conn c2(25.67,70.67);
    cout<<"c1 is "<<endl;
    c1.display();
     cout<<"c2 is "<<endl;
    c2.display();
    return 0;
}