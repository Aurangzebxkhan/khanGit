#include<iostream>
using namespace std;
int main()
{
    double priceA  = 50.0;
    double priceB = 30.0;
    double priceC = 20.0;
    int quantityA,quantityB,quantityC;
    cout<<"Enter the quantity of Product A:";
    cin>>quantityA;
    cout<<"Enter the quantity of Product B:";
    cin>>quantityB;
    cout<<"Enter the quantity of Product C:";
    cin>>quantityC;
    double total = (priceA*quantityA)+(priceB*quantityA)+(priceC*quantityC);
    cout<<" Total cost: $"<<total<<endl;
    double finalToal=(total>200)?total*0.9:total;
    cout<<" Total after discount:$"<<finalToal<<endl;
    double shipping =(finalToal<150)?15.0:0.0;
    cout << " Total after discount :$"<<finalTotal+shipping<<endl;
    return 0;

    
}