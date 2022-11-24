#include <iostream>
using namespace std;

class Student {
    int rollNo, java = 30, python = 45, maths = 40;
    string name;
    
    public:
        void setData(){
            cout<<"Roll Number : ";
            cin>>this->rollNo;
            cout<<"Name : ";
            cin>>this->name;
            cout<<"Java : ";
            cin>>this->java;
            cout<<"Python : ";
            cin>>this->python;
            cout<<"Maths : ";
            cin>>this->maths;
        }
        void getData(){
            cout<<endl;
            cout<<"Roll Number : "<<this->rollNo<<endl;
            cout<<"Name : "<<this->name<<endl;
            cout<<"Java : "<<this->java<<endl;
            cout<<"Python : "<<this->python<<endl;
            cout<<"Maths : "<<this->maths<<endl;
            cout<<endl;
        }
        int getRollNo(){
            return this->rollNo;
        }
        void updateMarks(int choice){
            if(choice == 1){
                cout<<"Current marks in java : "<<this->java<<endl;
                cout<<"Enter updated marks : ";
                cin>>this->java;
            }else if(choice == 2){
                cout<<"Current marks in python : "<<this->python<<endl;
                cout<<"Enter updated marks : ";
                cin>>this->python;
            }else{
                cout<<"Current marks in maths : "<<this->maths<<endl;
                cout<<"Enter updated marks : ";
                cin>>this->maths;
            }
            this->getData();
        }
};

int main() {
    Student s[50];
    int choice, rollNo, count = -1, flag = 1;
    
    while(flag == 1){
        cout<<"------------------------------"<<endl;
        cout<<"1) Add student"<<endl;
        cout<<"2) Update marks"<<endl;
        cout<<"3) Exit"<<endl;
        cout<<"------------------------------"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice){
            case 1:
                s[++count].setData();
                s[count].getData();
                break;
            case 2:
                cout<<"Enter roll number whose marks need to be updated : ";
                cin>>rollNo;
                
                for(int i = 0 ; i < 50 ; i++){
                    if(rollNo == s[i].getRollNo()){
                        cout<<"---------------"<<endl;
                        cout<<"1) Java"<<endl;
                        cout<<"2) Python"<<endl;
                        cout<<"3) Maths"<<endl;
                        cout<<"---------------"<<endl;
                        cout<<"Enter your choice : ";
                        cin>>choice;
                        
                        if(choice >= 1 && choice <= 3){
                            s[i].updateMarks(choice);
                        }else{
                            cout<<"Invalid choice"<<endl;
                        }
                        
                        rollNo = -1;
                        break;
                    }
                }
                if(rollNo != -1){
                    cout<<"Roll number not found"<<endl;
                }
                
                break;
            case 3:
                flag = 0;
                cout<<"GOODBYE"<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }

    return 0;
}
