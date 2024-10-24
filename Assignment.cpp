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
    double total = (priceA*quantityA)+(priceB*quantityB)+(priceC*quantityC);
    cout<<" Total cost: $"<<total<<endl;
    double finalTotal=(total>200)?total*0.9:total;
    cout<<" Total after discount:$"<<finalTotal<<endl;
    double shipping =(finalTotal<150)?15.0:0.0;
    cout << " Total after discount  and shipping:$"<<finalTotal +shipping<<endl;
    double totalWihtShiping=finalTotal+shipping;
    int loyaltypoints =(totalWihtShiping>300)?50:20;
    cout<<"Total after discount and shipping:$"<<totalWihtShiping<<endl;
    cout<<"Loyalty points earned:"<<loyaltypoints<<endl;

    return 0;

    
}