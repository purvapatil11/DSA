// ### mini-calculator
#include<iostream>
using namespace std;


void miniCalculator(){
    cout<<"welcome to my Calculator"<<endl;
    cout<<"--------------------------------------------------";

    int num1, num2;
    char choice;

    while (true)
    {
        cout<<"Enter < + > for addition"<<endl;
        cout<<"Enter < - > for subtraction"<<endl;
        cout<<"Enter < * > for Multiplication"<<endl;
        cout<<"Enter < / > for division"<<endl;
        cout<<"Enter < % > for modulus"<<endl;
        cout<<"Enter < E > for Exit...!"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

           cout<<"--------------------------------------------------"<<endl<<endl;

        switch(choice) {
            case '+':
                cout<<"Enter two numbers : ";
                cin>>num1>>num2;
                cout<<"Sum of" <<num1<< "and" <<num2<< "is" <<num1+num2;
            break;
            case '-':
                cout<<"Enter two numbers : ";
                cin>>num1>>num2;
                cout<<"subtraction of" <<num1<< "and" <<num2<< "is" <<num1-num2;
            break;
            case '*':
                cout<<"Enter two numbers : ";
                cin>>num1>>num2;
                cout<<"Product of" <<num1<< "and" <<num2<< "is" <<num1*num2;
            break;
            case '%':
                cout<<"Enter two numbers : ";
                cin>>num1>>num2;
                cout<<"Division of" <<num1<< "and" <<num2<< "is" <<num1%num2;
            break;
            case '/':
                float num1,num2;
                cout<<"Enter two numbers : ";
                cin>>num1>>num2;
                cout<<"Modulus is" <<num1<< "and" <<num2<< "is" <<num1/num2;
            break;
            case 'E':
                cout<<"You have exited the calculator";
                    exit(0);

            default:
            cout<<"Enter Valid choice"<<endl;
                 }
                 cout<<endl;
    }

    
}
int main(){
    miniCalculator();
    return 0;
}
