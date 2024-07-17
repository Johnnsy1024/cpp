#include <iostream>
// int maxSubArray(int nums[]) {
//     int size = sizeof(nums) / sizeof(nums[0]);
//     return size;
// }

int main() {
  /*
  数组在作为参数传入时会自动退化为指针，因此，数组的长度要在其声明后直接计算并将整数传入到函数中，而不要将数组名传入
  */
  const char* ptr = "Hello World!";
  ptr++;
  std::cout << *ptr << std::endl;
}
