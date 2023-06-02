#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;

    d.push_front(2);
    d.push_back(1);
    // for (int i: d)
    // {
    //     cout<<i<<" ";
    // }
    // d.pop_front();
    // cout<<endl;
    // for(int i: d){
    //     cout<<i<<" ";
    // }

    cout<<"print First Index Element " <<d.at(1)<<endl;
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
}