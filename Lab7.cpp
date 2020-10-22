/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<sstream>
#include<string>
using namespace std;
#define H 100
#define T 10
int multiply(string num1, string num2, int n){
    if (n == 1){

        stringstream dd(num1); 
        int mynum1 = 0; 
        dd >> mynum1; 

        stringstream dy(num2); 
        int mynum2 = 0; 
        dy >> mynum2; 

        return mynum1 * mynum2;
        //𝑥𝑦=𝑎𝑐10^𝑛+(𝑎𝑑+𝑏𝑐) 10^(𝑛/2)+𝑏𝑑

    } else {
        string a = num1.substr(0, n/2);
        string b = num1.substr(n/2, n/2);
        string c = num2.substr(0, n/2);
        string d = num2.substr(n/2, n/2);
        cout << "a" << a << endl;
        cout << "b" << b << endl;
        cout << "c" << c << endl;
        cout << "d" << d << endl;
        
        //a+b
        //c+d
        stringstream first_str(a); 
        int first = 0; 
        first_str >> first; 
        
        stringstream second_str(b); 
        int second = 0; 
        second_str >> second; 
        
        int a_plus_b = first + second;
        
        stringstream third_str(c); 
        int third = 0; 
        third_str >> third; 
        
        stringstream fourth_str(d); 
        int fourth = 0; 
        fourth_str >> fourth; 
        
        int c_plus_d = third + fourth;
        

        string a_p_b = to_string(a_plus_b);
        string c_p_d = to_string(c_plus_d);
        
        int xx = 0;
        int yy = 0;
        int zz = 0;
        xx += multiply(a, c, n/2);
        yy += multiply(b, d, n/2);
        int temp = multiply(a_p_b, c_p_d, n/2);
        temp = temp - xx - yy;
        zz += temp;
        
        return (xx * 100) + (yy * 10) + zz;
        

        
    }
}


int main()
{
    int **table = new int*[10];

    for (int i = 0; i < 10; i++){
        table[i] = new int[10];
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            table[i][j] = i*j;
        }
    }
    
    cout << multiply("2925", "6872", 1);
}
