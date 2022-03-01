#include<bits/stdc++.h>
#include<pthread.h>
using namespace std;

// argument to be sent to each thread
struct packet{
    int l;
    int r;
    int *arr_p;
};

void* merSort(void *p)
{
    void* v;
    packet *pack = (packet *)p;
    if(pack->l==pack->r)            // base case
        return v;

    int mid = (pack->l+pack->r)/2;

    // initializing independent packets to be sent
    pthread_t th1,th2;
    packet *pack1 , *pack2;
    pack1 = (packet *)malloc(sizeof(packet));
    pack2 = (packet *)malloc(sizeof(packet));
    pack1->l = pack->l;
    pack1->r = mid;
    pack1->arr_p = pack->arr_p;
    pack2->l = mid+1;
    pack2->r = pack->r;
    pack2->arr_p = pack->arr_p;

    if(pthread_create(&th1,NULL,&merSort,pack1))
    {
        printf("Error Creating Sub-thread Thread\n");
        return v;
    }
    if(pthread_create(&th2,NULL,&merSort,pack2))
    {
        printf("Error Creating Sub-thread Thread\n");
        return v;
    }
    int l = pack->l;
    int r = pack->r;
    int *x = pack->arr_p;

    pthread_join(th1,NULL);
    free(pack1);
    pthread_join(th2,NULL);
    free(pack2);

    int mer[r-l+1],ind=0 , i=l , j=mid+1;
    for(;i<=mid && j<=r;ind++)
        if(x[i]<=x[j])
            mer[ind]=x[i] , i++;
        else
            mer[ind]=x[j] , j++;

    for(;i<=mid;ind++)
        mer[ind] = x[i] , i++;
    for(;j<=r;ind++)
        mer[ind] = x[j] , j++;
    for(int i=l,j=0;i<=r;i++,j++)
        x[i] = mer[j];
    return v;

}
int main()
{
    printf("ENTER FILE NAME : ");
    char name[1000]; scanf("%s",name);
    if(!freopen(name, "r", stdin)){
        cout << "File NOT Found" << endl;
        return 0;
    }
    freopen ("Output_fil.txt","w",stdout);
    int n; cin >> n;
    int x[n];
    for(int i=0;i<n;i++)
        cin >> x[i];
    pthread_t th;
    packet pack{0,n-1,x};
    if(pthread_create(&th,NULL,&merSort,&pack))
    {
        printf("Error Creating Main Thread\n");
        return 0;
    }
    pthread_join(th,NULL);
    for(int i=0;i<n;i++)
        cout << x[i] << " ";
}
