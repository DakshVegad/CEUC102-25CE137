#include <iostream>
using namespace std;

class bill{
    private:
    float amount;
    float total_amount;
    public:
    int id;
    string name;
    float units;
    
   void cal_bill(int id,string name,float units){
      if(units <=100){
          amount=units*3;
          total_amount=amount+(amount*0.05);
      }
       else if(units>100 && units <=200){
           amount=(300)+((units-100)*5);
           total_amount=amount+(amount*0.05);
       }
       else if(units>200){
           amount=(800)+((units-200)*7);
           total_amount=amount+(amount*0.05);
       }
   return total_amount;
   }
};
int main(){
  bill b[100];
    int n;
    
    cout<<"\nEnter The No of bills : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
     cout<<"\nEnter The data ID Name Units: ";
        cin>>b[i].id,b[i].name,b[i].units;

    }
    for(int i=1;i<=n;i++){
    cout<<"\nBill summry\n"<<b[i].cal_bill();
    }
    return 0;
}
