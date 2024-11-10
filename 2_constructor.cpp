#include<iostream>
using namespace std;
class Email{
    private:
    string passward;
    protected:
    string email;
    public:
    void emaillns(){
        string email,passward;
        cin>> email;
        cin>>passward;
        this ->email=email;
        this ->passward=passward;
    }
    
    void emailGet(){
        cout<<"Email is:"<<this ->email<<endl;
    }
};
int main(){
    Email email;
    cout<<"Enter Email/Passward"<<endl;
    email.emaillns();
    email.emailGet();
    return 0;
}
