#include<bits/stdc++.h>
#include<string>
using namespace std;

class cars{
    private:
    string companyname;
    string modelname;
    string fueltype;
    float milage;
    double price;

    public:
    void setdata(string cname, string mname, string ftype,float m,double p){
        companyname = cname;
        modelname = mname;
        fueltype = ftype;
        milage = m;
        price = p;
    }
    void displaydata(){
        cout << "Car company name = " << companyname << endl;
        cout << "Car model name = " << modelname << endl;
        cout << "Car fuel type = " << fueltype << endl;
        cout << "Car milage = " <<milage << endl;
        cout << "Car price = " << price << endl;
    }
};

int main(void){
    cars car1,car2;
    car1.setdata("toyta", "altis", "disel", 15.5, 1500000);
    car1.displaydata();
    car2.setdata("Bazaz", "bike", "disel", 80.8, 150000);
    car2.displaydata();

    return 0;
}