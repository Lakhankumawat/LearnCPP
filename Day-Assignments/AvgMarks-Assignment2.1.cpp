//NOTE ::: Do not jump directly into solution read the problem statement first
//FOR PROBLEM STATEMENT VISIT https://onlinecourses.nptel.ac.in/noc21_cs38/progassignment?name=182
//Programming Assignment 2.2

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>


struct data{
char grade;
int credit;
};

int main()
{   int no,T;
 double Ci=0,GiCi=0;
    double C;
    std::cin>>no;
    data Arr[no];
    for(int i=0;i<no;i++){
      std::cin>>Arr[i].grade>>Arr[i].credit;
    }
    std::cin>>C>>T;
    for(int i=0;i<no;i++){
            GiCi+= (100 - Arr[i].grade - 25)*Arr[i].credit;
           Ci+=Arr[i].credit;
    }
    double SPI = 0;
    SPI = GiCi/Ci;

    double CPI = 0;
    CPI = (GiCi + T*C)/(Ci +T);
     std::cout<<std::fixed<<
     std::setprecision(2)<<SPI<<" "<<CPI;
    return 0;
}
