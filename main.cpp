#include <iostream>

#include <array>

void draw_board(const std::array<int, 9>& arr)
{
  std::cout << arr[0] << "|" << arr[1] << "|" << arr[2] << "\n";
  std::cout << "-----\n";
  std::cout << arr[3] << "|" << arr[4] << "|" << arr[5] << "\n";
  std::cout << "-----\n";
  std::cout << arr[6] << "|" << arr[7] << "|" << arr[8] << "\n";
}

int main()
{
  std::array<int, 9> squares = {0,0,0,0,0,0,0,0,0};
  draw_board(squares);
  return 0;
}
