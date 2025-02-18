#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

class solution
{
public:
    int search(vector<int>& nums,int target)
    {
        int left =0;
        int right =nums.size()-1;
        while(left<=right)
        {
            int middle = left+((right-left)/2);
            if(nums[middle]>target)
            {
                right =middle-1;
            }
            else if(nums[middle]<target)
            {
                left =middle + 1;
            }
            else{
                return middle;
            }
        }
        return -1;
    }
};



void test01()
{   
   
}

int main() {

	test01();

	system("pause");

	return 0;
}