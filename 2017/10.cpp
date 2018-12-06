#include <iostream>
#include <vector>
#include <array>
#include <numeric>
#include <algorithm>

void OneRound(std::array<int, 256>& p_numbers, std::vector<int> const& p_lenghts, int& p_position, int& p_skipSize)
{
  for (auto l: p_lenghts)
  {
    std::rotate(p_numbers.begin(), p_numbers.begin() + p_position, p_numbers.end());
    std::reverse(p_numbers.begin(), p_numbers.begin() + l);
    std::rotate(p_numbers.rbegin(), p_numbers.rbegin() + p_position, p_numbers.rend());
    p_position += l + p_skipSize;
    p_position %= p_numbers.size();
    ++p_skipSize;
  }
}

int main()
{
  std::vector<int> const LENGHTS = {189, 1, 111, 246, 254, 2, 0, 120, 215, 93, 255, 50, 84, 15, 94, 62};
  std::string const DATA = "189,1,111,246,254,2,0,120,215,93,255,50,84,15,94,62";

  {
    std::array<int, 256> numbers;
    std::iota(numbers.begin(), numbers.end(), 0);
    int position = 0;
    int skipSize = 0;
    OneRound(numbers, LENGHTS, position, skipSize);
    std::cout << numbers[0] * numbers[1] << '\n';
  }

  std::vector<int> lenghts;
  for (auto c: DATA)
  {
    lenghts.push_back(static_cast<int>(c));
  }
  for (auto i: {17, 31, 73, 47, 23})
  {
    lenghts.push_back(i);
  }
  {
    std::array<int, 256> numbers;
    std::iota(numbers.begin(), numbers.end(), 0);
    int position = 0;
    int skipSize = 0;
    for (int i = 0; i < 64; ++i)
    {
      OneRound(numbers, lenghts, position, skipSize);
    }
    for (int i = 0; i < 16; ++i)
    {
      int denseBlock = 0;
      for (int j = 0; j < 16; ++j)
      {
        denseBlock ^= numbers[i * 16 + j];
      }
      std::cout << std::hex << denseBlock;
    }
  }

  return 0;
}
