#include<iostream>
#include<string>

using namespace std;

float perfect_weight(float get){
    float perfectweight;
    string gender;
    cout<<"please enter ur gender:";
    cin>>gender;
    if (gender=="male")
    {
        perfectweight = 50+(0.9*(get-152.4));
    }else if (gender=="female")
    {
        perfectweight = 45.5+(0.91*(get-152.4));
    }else{
        cout<<"wrong gender"<<endl;
        perfect_weight(get);
    }
    return perfectweight;
}
int main(){
    bool flag = true;
    while(flag){
        float height;
        cout<<"hello user in this program we need you to enter your height to tell you your perfect weight"<<"\n"<<"please enter your height in centemeters:";
        cin>>height;
        cout<<"your perfect weight is:"<<perfect_weight(height)<<"\n";
        int choice;
        cout<<"do u want to continue or do u want to exit"<<"\n"<<"to continue choose 1\nto exit choose 2\nchoose:";
        cin>>choice;
        switch (choice)
        {
        case 1:
            main();
            break;
        case 2:
            flag = false;
            break;
        default:
            flag = false;
            break;
        }
    }
    return 0;
}
