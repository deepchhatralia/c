// Online C++ compiler to run C++ program online
#include <iostream>
#include <ctime>
using namespace std;

class Bank {
    private:
        int accNo;
        int balance;
    
    public:
        Bank(){
            this->accNo = rand();
            this->balance = 0;
        }
        int getAccountNumber(){
           return this->accNo; 
        }
        int getBalance(){
            return this->balance;
        }
        void deposit(int amt){
            this->balance += amt;
            cout<<"Transaction successfull\n";
            cout<<"Balance = "<<this->balance<<"\n";
        }
        void withdraw(int amt){
            this->balance -= amt;
            cout<<"Transaction successfull\n";
            cout<<"Balance = "<<this->balance<<"\n";
        }
};

int main() {
    srand(time(0));
    bool flag = true;
    int choice, amt;
    Bank obj;
    
    while(flag){
        printf("--------------------\n");
        printf("1) Get account number\n");
        printf("2) Balance\n");
        printf("3) Deposit\n");
        printf("4) Withdraw\n");
        printf("5) Exit\n");
        printf("--------------------\n");
        
        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                cout<<"Account No. : "<<obj.getAccountNumber()<<"\n";
                break;
            case 2:
                cout<<"Balance = "<<obj.getBalance()<<"\n";
                break;
            case 3:
                cout<<"Enter amount : ";
                cin>>amt;
                if(amt<=5000 && amt>=100){
                    obj.deposit(amt);
                }else{
                    cout<<"Amount should be less than 5000 and greater than 100\n";
                }
                break;
            case 4:
                cout<<"Enter amout to be withdrawn : ";
                cin>>amt;
                if(obj.getBalance() >= amt){
                    if(amt <= 1000){
                        obj.withdraw(amt);
                    }else{
                        cout<<"Maximum Rs 1000 allowed to withdraw\n";
                    }
                }else{
                    cout<<"Insufficient balance\n";
                }
                break;
            case 5:
                flag = false;
                cout<<"GOODBYE\n";
                break;
            default:
                cout<<"Invalid choice\n";
        }
    }
    

    return 0;
}
