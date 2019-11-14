#include <iostream>

#include <array>
#include <algorithm>

const bool won(const std::array<int, 9>& arr)
{
  return (arr[0] == arr[1] == arr[2] && arr[2] != 0) ||
         (arr[3] == arr[4] == arr[5] && arr[5] != 0) ||
         (arr[6] == arr[7] == arr[8] && arr[8] != 0) ||
         (arr[0] == arr[3] == arr[6] && arr[6] != 0) ||
         (arr[1] == arr[4] == arr[7] && arr[7] != 0) ||
         (arr[2] == arr[5] == arr[8] && arr[8] != 0) ||
         (arr[0] == arr[4] == arr[8] && arr[8] != 0) ||
         (arr[2] == arr[4] == arr[6] && arr[6] != 0);
}

const bool full(const std::array<int, 9>& arr)
{
  return std::none_of(arr.cbegin(), arr.cend(), [](int i){return i==0;});
}

void draw_board(const std::array<int, 9>& arr)
{
  std::cout << arr[0] << "|" << arr[1] << "|" << arr[2] << std::endl
            << "-----" << std::endl
            << arr[3] << "|" << arr[4] << "|" << arr[5] << std::endl
            << "-----" << std::endl
            << arr[6] << "|" << arr[7] << "|" << arr[8] << std::endl;
}

int enter_position()
{
  int position;
  std::cout << "Turn of player " << std::endl
            << "Enter position desired: ";
  std::cin >> position;

  return position;
}

int switch_player(int current_player)
{
  if (current_player == 1) return 2;
  else return 1;
}

int main()
{
  std::array<int, 9> squares = {0,0,0,0,0,0,0,0,0};
  int player = 2;
  while ((!won(squares)) && !full(squares)) {
    player=switch_player(player);
    draw_board(squares);
    squares[enter_position()] = player;
  }
  std::cout << "Player "<< player << "wins the game." << std::endl;
  draw_board(squares);
  return 0;
}
