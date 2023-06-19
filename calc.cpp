using namespace std;
#include <iostream>
int num1,num2,res;
char op;
int* n1p = &num1;
int* n2p = &num2;
int* rp  = &res;
char* opp = &op;
void addition(int* num1, int* num2){
    res = *num1 + *num2;
}
void subtraction(int* num1, int* num2){
    res = *num1-*num2;
}
void multiplication(int* num1, int* num2){
    res = (*num1)*(*num2);
}
void division(int* num1, int* num2){
    res = (*num1)/(*num2);
}
char request_operator(){
    cout << "Please enter the corresponding arithmatic operator (+,-,*,/)" <<endl;
    cin >> op;
    if (*opp == '+'){
        addition(n1p,n2p);
    }
    else if (*opp == '-'){
        subtraction(n1p,n2p);
    }
    else if (*opp == '*'){
        multiplication(n1p,n2p);
    }
    else if (*opp == '/'){
        division(n1p,n2p);
    }
    else {
        request_operator();
    }
    return op;
}

int main(){

    cout << "Please enter the first number" << endl;
    cin >> num1;
    cout << "Please enter the second number" << endl;
    cin >> num2;
    request_operator();
    cout << "The result is: " << *rp;
    
}