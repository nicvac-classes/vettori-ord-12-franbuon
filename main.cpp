#include <iostream>
using namespace std;

int main() {
    int N, i, j, t;
    bool scambi;
    scambi=true;
    cout<<"Quanti numeri vuoi ordinare?"<<endl;
    cin>>N;
    int num[N];
    i=0;
    while(i<N)
    {
        num[i]=random()%N*10-1;
        i=i+1;
    }
    i=0;
    while(i<N and scambi=true)
    {
        scambi=false;
        j=0;
        while(j<N-1)
        {
            if(num[j]>num[j-1])
            {
                t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
                scambi=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    while(i<N)
    {
        cout<<"Il "<<i+1<<"° numero è "<<num[i]<<endl;
        i=i+1;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
