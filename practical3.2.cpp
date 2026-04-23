#include<iostream>
#include<vector>
#include<ctime>

using namespace std;

int rsum(vector<int> &arr,int n){          //rsum=recursive sum
    if(n<=0)                               //isum=iterative sum
    return 0;

    else
    return arr[n-1] + rsum(arr, n-1);

}

int isum(vector<int> &arr){
   int sum=0;
   for(int i=0;i<arr.size();i++){
        sum+= arr[i];
   }
   return sum;
}

int main(){

    int n;
    cout<<"\nEnter number of elements: ";
    cin>>n;

    vector<int>arr(n);

    for(int i=0 ;i<n;i++){
        cout<<"\nEnter element "<<i+1<<":";
        cin>>arr[i];
    }

    clock_t start1 = clock();
    int recsum= rsum(arr,n );
    clock_t end1 = clock();

    clock_t start2 = clock();
    int itesum = isum(arr);
    clock_t end2 = clock();

    double time1 = double(end1 - start1)/CLOCKS_PER_SEC;
    double time2 = double(end2 - start2)/CLOCKS_PER_SEC;

    cout<<"\nRecursive sum: "<<recsum<<endl;
    cout<<"\nIterative sum: "<<itesum<<endl;

    cout<<endl<<"Execution time"<<endl;
    cout<<"Recursive: "<<time1<<"seconds"<<endl;
    cout<<"Iterative: "<<time2<<"seconds"<<endl;

    cout << "\n\nComplexity Analysis:";
    cout << "\nTime Complexity (both): O(n)";
    cout << "\nSpace Complexity:";
    cout << "\n  Recursive: O(n) (stack memory)";
    cout << "\n  Iterative: O(1)";

     return 0;

}
