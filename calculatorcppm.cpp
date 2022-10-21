#include <iostream>
using namespace std;
int main()
{
    int  a, b , answer;
    cout<<"\t\t\t\t\t>>SADE RIYAZI MESELE HELLI<< \nEger programi dayandirmaq isteseniz , operator daxil edin hissesine X yazmaginiz ve ENTER basmaginiz yeterlidir."<<endl;
    cout<<"Ilk Ededi Daxil Edin:";
    cin>>answer;
    char n;
    while(cout<<"Operatoru Daxil Edin(-,+,*,/) ve ya Programi Dayanirin:" && cin>>n && cout<<endl){
        if(n!='-' && n!='+' && n!='*' && n!='/'){
            if(n=='X' || n == 'x'){
                cout<<"Programi Dayandirdiniz!";
            }else{
                cout<<"Duzgun Operator Daxil Etmediyiniz Ucun Program Dayandirildi!"<<endl;
            }
            break;
        }
        switch(n){
            case '-':{
                cout<<"Cixilani Daxil Edin:";
                cin>>b;
                a = answer;
                answer = answer-b;
                cout<<a<<'-'<<b<<'='<<answer<<endl;
                cout<<endl;
                break;
            }
            case '+':{
                cout<<"Toplanani Daxil Edin:";
                cin>>b;
                a = answer;
                answer = answer+b;
                cout<<a<<'+'<<b<<'='<<answer<<endl;
                cout<<endl;
                break;
            }
            case '*':{
                cout<<"Vurani Daxil Edin:";
                cin>>b;
                a = answer;
                answer = answer*b;
                cout<<a<<'*'<<b<<'='<<answer<<endl;
                cout<<endl;
                break;
            }
            case '/':{
                cout<<"Boleni Daxil Edin:";
                cin>>b;
                a = answer;
                answer = answer/b;
                cout<<a<<'/'<<b<<'='<<answer<<endl;
                cout<<endl;
                break;
            }
        
        }
    }
    return 0;
}
