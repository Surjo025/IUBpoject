#include <iostream>
using namespace std;
class reverse_number{
private:
    int number,reverse = 0;
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
public:
    void input(){
    cout<<"Enter a 5 digit number : "<<endl;
    cin>>number;
    }
    void process(){
        num1 = number%10;
        number = number/10;
        num2 = number%10;
        number = number/10;
        num3 = number%10;
        number = number/10;
        num4 = number%10;
        number = number/10;
        num5 = number%10;
        number = number/10;

      reverse = num1*10000 + num2*1000 + num3*100 + num4*10 + num5*1;

    }
    void output(){
          cout<<"reverse number:"<<reverse<<endl;

    }

};
int main(){
    reverse_number obj1;
    obj1.input();
    obj1.process();
    obj1.output();
    return 0;

}
