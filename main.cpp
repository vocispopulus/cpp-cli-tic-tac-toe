#include <iostream>

#include <array>

void draw_board(const std::array<int, 9>& arr)
{
  std::cout << arr[0] << "|" << arr[1] << "|" << arr[2] << std::endl
            << "-----" << std::endl
            << arr[3] << "|" << arr[4] << "|" << arr[5] << std::endl
            << "-----" << std::endl
            << arr[6] << "|" << arr[7] << "|" << arr[8] << std::endl;
}

int turn()
{
  int position;
  std::cout << "Turn of player " << std::endl
            << "Enter position desired: ";
  std::cin >> position;
  return position;
}

int main()
{
  std::array<int, 9> squares = {0,0,0,0,0,0,0,0,0};
  draw_board(squares);
  squares[turn()] = 1;
  draw_board(squares);
  return 0;
}
