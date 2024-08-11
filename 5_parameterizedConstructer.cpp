#include<iostream>
using namespace std;
class conn{
    int m,n;
    public:
        conn(int,int);
        void display(void){
            cout<<"m = "<<m<<endl;
            cout<<"n = "<<n<<endl;
        }
};
conn::conn(int a,int b){
    m=a;
    n=b;
}
int main(){
    conn c1(0,100);
    conn c2=conn(50,70);
    cout<<"Your c1 is "<<endl;
    c1.display();
    cout<<"Your c2 is "<<endl;
    c2.display();
    return 0;
}