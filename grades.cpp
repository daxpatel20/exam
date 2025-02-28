#include<iostream>

using namespace std ;

int main (){

    int d1, d2, d3, total, precentage ;

    cout << "Enter num (0-100):" << endl;
    cout << " O.S ";
    cin  >> d1;  
    cout << " O.B " ;
    cin  >> d2;

    cout << " RDBMS " ;
    cin  >> d3;

     int avg =  (d1 + d2 + d3)  /3;
     cout << avg; 

    cout << "Enter marks " << total << endl ;
    cout << "Enter gred " << precentage << endl ;
    
    if(  avg >= 90){
        cout << " Enter ans is A :";
    } else if ( avg  >= 80){
        cout << " Enter ans is B :";
    } else if ( avg  >= 70){
        cout << " Enter ans is C :";
    } else if ( avg  >= 60){
        cout << " Enter ans is D :";
    }    
    
    return 0 ;
}