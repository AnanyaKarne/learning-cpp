#include <iostream>
#include <vector>
using namespace std;
 void moveZeroes(vector<int>& nums) {
        int n=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
        nums[n]=nums[i];
        n++;
        }
        while(n<nums.size()){
            nums[n]=0;
            n++;
        }
    }
}
int main(){

}