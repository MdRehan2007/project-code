#include <iostream>
using namespace std;
class trainbooking{
public:
void fare(int distance,int price){
    cout<<"Regular fare for "<<distance<<"KM "<<price<<endl;
}
void fare(int distance,int price,string seating,int extra){
    cout<<"class : "<<seating<<endl;
    cout<<"Distance : "<<distance<<endl;
    cout<<"Base fare : "<<price<<endl;
    cout<<"class charge ("<<seating<<") : "<<extra<<endl;
    cout<<"Total Fare :"<<price+extra<<endl;


}
void fare(int distance,int price,string seating,int extra,int discount){
    cout<<"class : "<<seating<<endl;
    cout<<"Distance (KM): "<<distance<<endl;
      cout<<"Base fare : "<<price<<endl;
      cout<<"Discount ("<<discount<<"%) : "<<price*discount/100<<endl;
      cout<<"final fare after discount : "<<price-price*discount/100<<endl;


}
};
int main(){
    trainbooking t1;
    string dest;
    cout<<"enter destination station : "<<endl;
    cin>>dest;
    int dis;
    int price;
    
   if (dest == "vijayawada") {
        dis = 500; price = 180;
    } else if (dest == "guntur") {
        dis = 480; price = 160;
    } else if (dest == "markapur") {
        dis = 360; price = 130;
    } else if (dest == "nandyal") {
        dis = 300; price = 120;
    } else if (dest == "tadipatri") {
        dis = 250; price = 100;
    } else {
        cout << "❌ Currently, this destination is not available.\n";
       
    }
     cout << "\n1. Regular Fare\n2. With Class Type\n3. With Discount\n";
     int choice;
    cout << "Enter your choice: ";
    cin >> choice;
if (choice == 1) {
        t1.fare(dis, price);
    } else if (choice == 2) {
        string seat;
        int extr;
        cout << "Enter class type (Sleeper/AC): ";
        cin >> seat;
        int extr=500;
        t1.fare(dis, price, seat, extr);
    } else if (choice == 3) {
        string seat;
        int extr, disco;
        cout << "Enter class type (Sleeper/AC): ";
        cin >> seat;
        int extr=500;
        int disco=10;
        t1.fare(dis, price, seat, extr, disco);
    } else {
        cout << "❌ Invalid choice.\n";
    }

    return 0;
}