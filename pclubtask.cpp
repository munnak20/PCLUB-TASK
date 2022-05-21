#include<iostream>
#include<vector>


using namespace std;
// define a class for borrower which contains their name and money request
class borrower{
public:
string name;
    int request;


};
// define a class for lender which contains its balance and  store name and due of borrowers;

class lender{
    public:
    int balance;
    vector<string> name;
    vector<int> due;
    // define a function which will pay the borrower, note down its name and due ,update balance
    void pay( string s,int a){
        name.push_back(s);
        due.push_back(a);

        balance-=a;

    }
    // function to print final status of lender and final record of borrowers
    void print(){
        cout<<"Balance left= "<<balance<<endl;
        cout<<"Due to: ";
        for(auto x:name){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<"Due : ";
        for(auto x:due){
            cout<<x<<" ";
        }
        cout<<endl;
    }

};





int main(){
    // define borrowers
    borrower b1, b2, b3;

    // given name to the borrowers
    b1.name="A";
    b2.name="B";
    b3.name="C";

    // borrowers requested money
    b1.request=100;
    b2.request=50;
    b3.request=150;

    // define lender
    lender l1;

    // define balance for lender
    l1.balance=1000;

    // lender paying the request to each borrower
    l1.pay(b1.name,b1.request);
     l1.pay(b2.name,b2.request);
 l1.pay(b3.name,b3.request);

//  printing final status of lender

    l1.print();





    return 0;

}
