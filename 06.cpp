#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::vector<int> const DATA = {14, 0, 15, 12, 11, 11, 3, 5, 1, 6, 8, 4, 9, 1, 8, 4};
  std::vector<std::vector<int>> history;

  int step = 0;
  auto data = DATA;
  while (std::find(history.begin(), history.end(), data) == history.end())
  {
    history.push_back(data);
    ++step;

    // Redistribute blocks
    auto maxFound = std::max_element(data.begin(), data.end());
    auto blockNumber = *maxFound;
    *maxFound = 0;
    auto index = (std::distance(data.begin(), maxFound) + 1) % data.size();
    for (; blockNumber > 0; --blockNumber, index = (index + 1) % data.size())
    {
      ++data[index];
    }
  }
  auto cycleCount = std::distance(std::find(history.begin(), history.end(), data), history.end());
  std::cout << step << '\n' << cycleCount;

  return 0;
}
