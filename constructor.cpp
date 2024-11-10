#include <iostream>
using namespace std;
class age{
    public:
    float num;
    age(){
        num=0;
    }
    age(int a){
        num=a;
    }
    void display(){
        cout<<num<<endl;
    }
};
int main(){
    age age_default;
    age age_insert(20);
    age_default.display();
    age_insert.display();
    return 0;
}