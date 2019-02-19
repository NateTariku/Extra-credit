/*
 *        File: extracredit.cc
 *      Author: Nate Tariku
 *        Date: feb 19 2019
 * Description: A program to find the smallest integer
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int min_value(int x, int y);                                                        //function prototype

int main(int argc, char const *argv[]) {

    int a;
    int b;
    
    cout << "Enter two numbers to find the smallest:" << endl;
    cin >> a >> b;

    int c = min_value(a,b);

    cout << "The smallest value from the two numbers is:" << c <<endl;


    return 0;
}


int min_value(int x, int y){
if (x<y)
return x;  
else 
return y;
}