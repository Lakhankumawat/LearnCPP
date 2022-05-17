//---- Add and delete edge of directed graph in an adjacency matrix ----//

#include<iostream>

using namespace std;

void display(int adj[][5]);
void add_edge(int origin,int destine,int adj[][5]);
void del_edge(int origin,int destine,int adj[][5]);
int main()
{
    int adj[5][5]={0,1,1,1,0  ,1,0,0,1,1  ,0,0,0,1,0  ,1,1,1,0,1  ,0,1,0,1,0};
    int num,origin,destin;
    display(adj);
    while(1){
    cout<<"Enter 1 for add or 2 for delete an egde in directed graph and 3 for exit : ";
    cin>>num;
    switch(num){
        case 1:
        cout<<"Enter the origin and destination of the egde to be added: "<<endl;
        cin>>origin>>destin;
        add_edge(origin,destin,adj);
        display(adj);
        break;

        case 2:
        cout<<"Enter the origin and destination of the egde to be deleted: "<<endl;
        cin>>origin>>destin;
        del_edge(origin,destin,adj);
        display(adj);
        break;

        case 3:
        exit(1);

        default :
        cout<<"Please Enter from givien choice"<<endl;
        break;
    }
}
    return 0;
}

void display(int adj[][5]){
    int i,j;
    cout<<"Adjacency matrix of graph"<<endl;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<"\t"<<(adj[i][j]);}
        cout<<endl;
    }    
}
void add_edge(int origin,int destin, int adj[][5]){
    if(origin>=5||destin>=5||destin<0||origin<0)
        {
            cout<<"invalid vertex"<<endl;
            return;
        }
    adj[origin][destin]=1;
}
void del_edge(int origin,int destin,int adj[][5]){
    if(origin>=5||destin>=5||destin<0||origin<0)
        {
            cout<<"invalid vertex"<<endl;
            return;
        }
    adj[origin][destin]=0;
}