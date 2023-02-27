/*
conditional statements
if - else

// simple if-else loop
#include<iostream>
using namespace std;
int main(){
    // declare a integer type variable 
    int age;
    cout << "Enter the age: "<< endl;
    cin >>age;

    if(age >=18){
        cout << "Vote"<< endl;
    }
    else{
        cout << "Can't Vote";
    }
}


// Grade Generator 

#include<iostream>
using namespace std;

int main() {
   int marks;
   cout<<"enter the marks"<<endl;
   cin>>marks;
   if(marks>=90 && marks<=100)
     cout<<"A GRADE";
   else if (marks>=70 && marks<90)
     cout<<"B grade";
   else if(marks>=50 && marks<70)
     cout<<"C grade";
   else 
     cout<<"Fail";

     return 0;
}


*/


// Imp Question
#include<iostream>
using namespace std;
int main(){
    int n;
    if(cin >> n)
    cout << "Sathish";
}