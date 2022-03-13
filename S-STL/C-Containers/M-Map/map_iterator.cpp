// Map Function in CPP.
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    // Initializing Map.
    map<string,int>marksMap;

    // Adding elements in Map.
    marksMap["Student A"]=98;
    marksMap["Student B"]=88;
    marksMap["Student C"]=78;

    // Inserting element in Map.
    marksMap.insert({{"Student D",85},{"Student E",80}});

    //Initializing Iteratot.
    map<string,int>::iterator iter;
    iter=marksMap.begin();

    // Iterating througn Map.
    for (iter=marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    // Operation of Maps.
    cout<<"Size of map is "<<marksMap.size()<<endl;
    cout<<"Maximum size of map is "<<marksMap.max_size()<<endl;
    cout<<"Empty return value of map is "<<marksMap.empty()<<endl;
    return 0;
}