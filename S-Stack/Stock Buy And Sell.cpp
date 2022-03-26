#include<iostream>

using namespace std;

// This Program to calculate Stock Buy And Sell



// This function to calculate the profit
int calculate_profit(int sale_day,int Purchase_day,int bay,int sell){
    
    if(Purchase_day <= sale_day){
        return 0;
    }else{
        return sell - bay;
    }
}



int main(){
    int num_days;
    int price;
    int stocks [] = {};
    
    

    cout<< "How many day you want to enter it's stock price: ";
    cin>> num_days;

    for (int i = 0; i < num_days; i++)        // append all stock price in list
    {
        cout<<"\nEnter the stock price day"<<i+1<<": ";
        cin.ignore();
        cin>>price;
        stocks[i] = price;
        
    }
    
    
    
    int Purchase_day,sale_day;
    int min = stocks[0];
    int max = stocks[0];
    for (int j=0;j<num_days;j++)    // get the maximum and the minimum stocks
    {
        if (stocks[j] < min) {
            min = stocks[j];
            Purchase_day = j+1;
        }
 
        if (stocks[j] > max) {
            max = stocks[j];
            sale_day = j+1;
        }
    }
     
    
    
    cout<<"The profit is = "<<calculate_profit(sale_day,Purchase_day,min,max)<<endl;

    return 0;
}












