//Write a simple program of data abstraction.
#include<iostream>
using namespace std;
class Sample{
public:

    int g1, g2 ;
    void accept() {
    cout<<"Enter the two values"<<endl;
    cin>>g1>>g2;
    }

    void display() {
    cout<<g1 << " "<< g2;

    }
};
int main() {

    Sample s1;
    s1.accept();
    s1.display();

    return 0;
}
//******OUTPUT*******
Enter the two values
10
20
10 20
