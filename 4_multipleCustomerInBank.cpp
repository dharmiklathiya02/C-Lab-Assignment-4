#include<iostream>
using namespace std;
class bank{
    char nameOfDepositor[20];
    long accountNumber;
    char typeOfAccount[20];
    int balance;
    public:
        void assignValue(){
            cout<<"Enter Name Of Depositer ";
            cin>>nameOfDepositor;
            cout<<"Entre Type Of Acoount ";
            cin>>typeOfAccount;
            cout<<"Enter Account Number Here ";
            cin>>accountNumber;
            cout<<"Enter Balance In account Here ";
            cin>>balance;
        }
        void deposite(){
            int deposite;
            cout<<"Enter Deposite Amount ";
            cin>>deposite;
            balance+=deposite;
        }
        int withdraw(){
            int withdrowAmmnout;
            cout<<"How Much you Are withdrow ";
            cin>>withdrowAmmnout;
            if(balance<withdrowAmmnout){
                cout<<"Your balance Is Not Enough To Widthdrow!!"<<endl<<endl;
                return 0;
            }
            else{
                cout<<"your Have successfully Widthrow."<<withdrowAmmnout<<endl<<endl;
                balance=balance-withdrowAmmnout;
            }
        }
        void display(){
            cout<<endl<<endl;
            cout<<"Your Name is "<<nameOfDepositor<<endl;
            cout<<"Your Bank Account Type Is "<<typeOfAccount<<endl;
            cout<<"Your Account Number Is "<<accountNumber<<endl;
            cout<<"Your Account Balance Is "<<balance<<endl;
        }
};
int main(){
    bank obj[11]={};
    for(int i=1;i<=10;i++){
        cout<<"Your "<<i<<" customer Bank Detail Is Here"<<endl;
        obj[i].assignValue();
        obj[i].deposite();
        obj[i].withdraw();
    }
    cout<<"Your Customer Details";
    for(int i=1;i<=10;i++){
            cout<<"Your "<<i<<" Customer Details Here"<<endl<<endl;
            obj[i].display();
    }
    return 0;
}