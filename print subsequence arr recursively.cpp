#include <iostream>
#include <vector>
using namespace std;

void subsequence(int ind, int arr[],vector<int> &ds,int n){
     //base case
      if(ind == n){
        for(auto it:ds){
           cout<<it<<" ";
        }
        if(ds.size() == 0){
           cout<<"{}";
        }
        cout<<endl;
        return ;
      }
   ds.push_back(arr[ind]); 
    subsequence(ind+1,arr,ds,n);
    ds.pop_back();
     subsequence(ind+1,arr,ds,n);
}
int main() {
 int arr[] = {3,1,2};
  int n = 3;
  vector<int> ds;
  
  subsequence(0,arr,ds,n);
   
}