#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout<<"please enter tha value of x:"<<endl;
    cin>>x;
    y=x;
    while (y>1)
{
    if (y%2==0){y/=2;
        cout<<y<<endl;
    }
    else{y*=3;
        cout<<++y<<endl;
    }
    
}

}