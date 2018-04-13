#include <iostream>
#include <vector>
void rotate(std::vector<int>& nums, int k)
{
	int i, j, temp;
	if (k>nums.size())
		k = k%nums.size();
	for (i = 0, j = nums.size() - 1 - k;i<j;++i, --j)
	{
		temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}
	for (i = nums.size() - k, j = nums.size() - 1;i<j;++i, --j)
	{
		temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}
	for (i = 0, j = nums.size() - 1;i<j;++i, --j)
	{
		temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}

}
void print(std::vector<int>& nums)
{
	for (int i = 0;i < nums.size();++i)
		std::cout << nums[i] << " ";
}
int main()
{
	std::vector<int> a;
	int input,k,n;
	std::cout << "Enter the size of the array ";
	do { std::cin >> n; } while (n <= 0);
	std::cout << std::endl;
	std::cout <<"Enter the elements of the array ";

	for(int i=0;i<n;++i)
	{
		std::cin >> input;
		a.push_back(input);
	}
	std::cout << std::endl;
	std::cout << "Enter the  number of steps ";
	do { std::cin >> k; } while (k < 0);
	std::cout << std::endl;
	rotate(a,k);
	print(a);
}