
#include<queue>
#include<iostream>
using namespace std;

//Make a class to store type of data in queue

class Person{
public:
    string name;
    int age;

    //Person constructor ---Empty one / Default one
    Person(){

    }
    //Person constructor ---Parameters provided
    Person(string n,int a){

    name=n;
    age=a;
    }

};

//Person comparator to compare two persons on the basis of their age
class PersonCompare{
public:
    bool operator()(Person A, Person B){
    return A.age < B.age;
    }
};


int main(){

//---Pq of type Person---------
//--------Vector to store data in pq------
//--Use person compare to arrange data in heap-------

priority_queue<Person , vector<Person>, PersonCompare> pq;

int n,age;
string name;

cin>>n;
cout<<"Name Age"<<endl;
for(int i=0;i<n;i++){
    cin>>name>>age;

    Person p(name,age);
    pq.push(p);
}

//Extract the top 3 elements from the PQ with greater age

int k=3;

for(int i=0;i<k;i++){

    Person p1 = pq.top();
    cout<<p1.name<<" "<<p1.age<<endl;
    pq.pop();
}

return 0;
}
/* ---------Sample Input and Output -------------
5
Name Age
Ram 30
Kohli 35
Sweety 12
Blue 2
Grandpa 92

//OUTPUT:

Grandpa 92
Kohli 35
Ram 30

-------------*/
