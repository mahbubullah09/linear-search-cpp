#include <iostream>
using namespace std;

int main()
{
    int N,i;
    cout <<"Enter the array size: ";
    cin >> N;

    int DATA[N];
    for (i=1;i<=N;i++)
        cin>> DATA[i];
    for(int i=1;i<=N;i++)
       cout<<"DATA["<<i<<"]: "<<DATA[i]<<endl;

    int ITEM;
    cout<<"Enter the search ITEM: ";
    cin>>ITEM;

    int LOC=1;

    while(DATA[LOC] !=ITEM && LOC <=N)
        LOC=LOC+1;
    if (LOC==N+1)
        cout<<"ITEM not found in the array DATA!";
    else
        cout<<"ITEM is found in location: "<<LOC;
}
