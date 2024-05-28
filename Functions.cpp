#include<iostream>
using namespace std;
 
 
    // function are set of code  which performs something for you
    // function are used to modularise code
    // function are used to increase reliabily
    // function are used to use same code multiple time
    // void
    // return
    //parameterised
    //non parameterised

    void printName (string name){
        cout<<"hey "<< name <<endl;

    }
    int main(){
        string name;
        cin >> name;
        printName (name) ;
        

        string name2;
        cin>> name2;
        printName (name2);
        return 0;

    
    }
    

 