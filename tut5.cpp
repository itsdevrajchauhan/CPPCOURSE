//1.system header files :it comes with the compiler
#include<iostream>
//2. user  defined header files : it is written by the programmer
//it can error if the file is not ther like :#include this.h 
using namespace std;

int main(){

    int a=4, b =5;
    cout<< " Operateres in C++"<<endl;
    cout<<" following are the types of operaters in c++"<<endl;
    cout<<"Artihmetic operators"<<endl; 
    cout<<"the value of a+ b is " << a+b<<endl;
    cout<<"the value of a- b is : " << a-b<<endl;
    cout<<"the value of a*b  is : "<<a*b<<endl;
    cout<<"the value of a/b is : " <<a/b<<endl;
     cout<<"the value of a% b is " << a%b<<endl;
    cout<<"the value of a-- is : " << a--<<endl;
    cout<<"the value of a++  is : "<<a++<<endl;
    cout<<"the value of --a is : " <<--a<<endl;
     cout<<"the value of ++a b is " << ++a<<endl;
cout<<endl;


     cout<<" Comaprison operators"<<endl;
    cout<<"the value of a==b is : " <<(a==b)<<endl;
     cout<<"the value of a!= b is " << (a!=b)<<endl;
    cout<<"the value of a>=b is : " << (a>=b)<<endl;
    cout<<"the value of a<=b  is : "<<(a<=b)<<endl;
    cout<<"the value of a<b is : " <<(a<b)<<endl;
     cout<<"the value of a> b is " <<(a>b)<<endl;


 cout<<" Logical operators"<<endl;
    cout<<"the value of && usecase is : " <<((a==b)&&(a<b))<<endl;
     cout<<"the value of or  is " <<( (a!=b)||(a<b))<<endl;
    cout<<"the value of not is : " << (!(a==b))<<endl;
    


    return 0;
}

//Here i learned about operaters adn lot of their usecases and example all 5 type operaters but i added only 3 
//also learned about headewr file types and thier importance 
