#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your score : ";
    cin>>marks;

    char grade=marks>=90?'A' :marks>=80?'B' :marks>=70?'C' :marks>=60?'D' :marks>=50?'E' :'F' ;

    cout<<"Your grade is "<<" "<<grade;

    switch(grade){
        case 'A':
        cout<<". Excellent work! ";
        break;

        case 'B':
        cout<<". Well done. ";
        break;

        case 'C':
        cout<<". Good job ";
        break;

         case 'D':
        cout<<". You Passed, but you could do better. ";
        break;

         case 'E':
        cout<<". You Passed, but you could do better. ";
        break;

         case 'F':
        cout<<". Sorry, you failed ";
        break;


    }

    if(grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='E'){
        cout<<" Congratulations! You are eligible for the next level.";
    }
    else{
        cout<<" Please try again next time.";
    }




}