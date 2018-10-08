// This is a test for git pull
// Using GitHub once Again
//Test 4
//  main.cpp
//  FinancialCalculator
//  Jason Anthony
//  CWID: 888769130
//  Created by Jason on 9/14/18.
//  Copyright © 2018 Jason. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
    //variables(uninitialized)
    //I didn't inlude e as a variable as I wanted to get the best approxamation of the money so I chose to use the constant that was already in the math library (look down below)
    string name;
    const double E = 2.718281828;
    double age, time;
    double investment, annualRate, total, total2;

    //User Inputs
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "What is your age? " << endl;
    cin >> age;
    cout << "What is the amount you would like to invest?" << endl;
    cin >> investment;
    cout << "What is your expected annual rate of return?" << endl;
    cin >> annualRate;
    cout << "\n";
    
    if(annualRate < 1)
    {
        total = investment * pow(E, (annualRate * 10));
        
        //Computation
        time = (log(2)/annualRate) + age;
        
        //Computation
        //retRate = log(2)/time;
        total2 = investment * pow(E, annualRate * (65 - age));
    }
    else
    {
        //Computation (PeRT)
        total = investment * pow(E, ((annualRate / 100)) * 10);
    
        //Computation
        time = (log(2)/(annualRate / 100)) + age;
    
        //Computation
        //I did some research into the math library and I was able to find "e" as a math constant labled as "M_E"
        total2 = investment * pow(E, annualRate * (65 - age));
    }
    
    std::cout.imbue(std::locale(""));
    
    //Outputs
    cout << fixed << setprecision(2);
    cout << "Name: " << name << " \n" << "Age: " << age << "\n" <<  "Money after 10 years: " << "$" << total << endl;
    cout << "\n";
    cout << "You will be " << time << " years old when your investment doubles." << endl;
    cout << "\n";
    cout << "At 65 years old, your investment will be worth " << "$" << total2 << endl;
    
    return 0;
}
