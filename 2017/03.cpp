#include <iostream>
#include <utility>
#include <array>
#include <map>

int main()
{
  using Coords = std::pair<int, int>;
  int const INPUT = 361527;
  std::map<Coords, int> map;

  Coords c{0, 0};
  Coords delta{0, -1};
  map[{0, 0}] = 1;
  int maxSum = 0;
  for (int address = 1; address < INPUT; ++address)
  {
    if (c.first == c.second
    || (c.first < 0 && c.first == -c.second)
    || (c.first > 0 && c.first == 1-c.second))
    {
      delta = {-delta.second, delta.first};
    }

    c.first += delta.first;
    c.second += delta.second;

    if (maxSum < INPUT)
    {
      for (int x: {-1, 0, 1})
      {
        for (int y: {-1, 0, 1})
        {
          if (x != 0 || y != 0)
          {
            map[c] += map[{c.first + x, c.second + y}];
          }
        }
      }
      maxSum = map[c];
    }
  }
  std::cout << std::abs(c.first) + std::abs(c.second) << '\n' << maxSum;

  return 0;
}
