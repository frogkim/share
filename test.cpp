#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
void display(vector<int>& v);
void rotate(vector<int> nums, int k);
void rotate2(vector<int>& nums, int k);

int main()
{
    vector<int> sample;

    sample = { 1,2,3,4,5,6,7 };
    rotate(sample, 3);
    rotate2(sample, 3);

    sample = { -1,-100,3,99 };
    rotate(sample, 2);
    rotate2(sample, 2);

    sample = { 1,2,3 };
    rotate(sample, 1);
    rotate2(sample, 1);

    cout << endl;
    cout << "Create new vector<int>" << endl;
    vector<int> sample2;
    sample2 = { -1,-100,3,99 };
    rotate(sample2, 2);
    rotate2(sample2, 2);

    cout << endl;
    cout << "Clear first sample" << endl;
    sample.clear();
    sample = { 1,2,3 };
    rotate(sample, 1);
    rotate2(sample, 1);
}

void rotate(vector<int> nums, int k) {
    cout << "Rotate 1: k = " << k << endl;
    display(nums);
    k = k % nums.size();
    nums.insert(nums.begin(), nums.end() - k, nums.end());
    display(nums);
    nums.erase(nums.end() - k, nums.end());
    display(nums);
    cout << endl;
}

void rotate2(vector<int>& nums, int k) {
    cout << "Rotate 2: k = " << k << endl;
    display(nums);
    k = k % nums.size();
    nums.insert(nums.begin(), nums.end() - k, nums.end());
    display(nums);
    nums.erase(nums.end() - k, nums.end());
    display(nums);
    cout << endl;
}

void display(vector<int>& v)
{
    for (auto i : v)
    {
        cout << i << ", ";
    }
    cout << endl;
}
