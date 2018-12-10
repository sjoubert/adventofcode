#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

int main()
{
  std::vector<std::string> const labels = {
    "jplenqtlagxhivmwmscfukzodp", "jbrehqtlagxhivmeyscfuvzodp", "jbreaqtlagxzivmwysofukzodp",
    "jxrgnqtlagxhivmwyscfukwodp", "jbrenqtwagjhivmwysxfukzodp", "jbrenqplagxhivmwyscfuazoip",
    "jbrenqtlagxhivzwyscfldzodp", "jbrefqtlagxhizmwyfcfukzodp", "jbrenqtlagxhevmwfsafukzodp",
    "jbrunqtlagxrivmsyscfukzodp", "jbrenqtlaguhivmwyhlfukzodp", "jbrcnstsagxhivmwyscfukzodp",
    "jbrenqtlagozivmwyscbukzodp", "jbrenqwlagxhivswysrfukzodp", "jbrenstlagxhuvmiyscfukzodp",
    "jbranqtlhgxhivmwysnfukzodp", "jbrenqtvagxhinmxyscfukzodp", "jbrenqtlagdhivmwyscfukxody",
    "jbrenqtlagelavmwyscfukzodp", "jbrenqtlagxhtvmwyhcfukzbdp", "jbrenqwlagxhivmwyscfutzopp",
    "jbrenqtlavxhibmtyscfukzodp", "jbronqtlagxnivmwyscfuzzodp", "jbredqtlagxhppmwyscfukzodp",
    "jbrcnqtlogxhivmwysxfukzodp", "jbremqtlagehivswyscfukzodp", "jbrenqolagxhivmcyscfukzokp",
    "jbrehqtlacxhgvmwyscfukzodp", "fbrlnqtlagxhivmwyscbukzodp", "zbrfnqtlagxhivrwyscfukzodp",
    "jbregqtlagxnivmwyscfhkzodp", "jbrenqtllgxnivmwystfukzodp", "jurenqtlagxhivmwyscfulzoup",
    "jbrenitdagxhivmwyxcfukzodp", "jbrenqtlagxqivmwyscvuszodp", "jbqenqwlagxhivmwyscfckzodp",
    "jbrenqtlagxhivmwxscqupzodp", "jbrenqtlagxhivmwysciuqiodp", "jbrjnjtlagxhivmwyscfukzode",
    "jbrenqtlagxhuvmwqscfukzods", "jbrenqtlagxhuvmuyscfukzudp", "ibrenqtlagxhivmwyscfuktokp",
    "jbsenqtlagxhivcwyscfuksodp", "jbrfnntlagxhivmwnscfukzodp", "jzrenqulagxhivmwyscfukzodx",
    "jbrenqtqygxhivmwyscfukzwdp", "jbrenqtlagxfixmwyscfukzcdp", "jbrenqaoagxhivmwyshfukzodp",
    "jbrenqtlazxhivmworcfukzodp", "jbrenqtlagxhicowyscfukrodp", "jbrqnqtlagxhivzwyzcfukzodp",
    "jbrenqtlalxhuvxwyscfukzodp", "jbrenqtlqgxhhviwyscfukzodp", "jbrenqtuggxhivmoyscfukzodp",
    "jbrenqtlagxpivmwyscfukkodw", "zbrenqhlagxhivmwyscdukzodp", "jbrenutlagxxivmwyscfukzoqp",
    "obrenqtlagxhivmwxscfuszodp", "jbrenqtlagxhlvmwyscfuixodp", "rbrenqtlagdhixmwyscfukzodp",
    "jbrenqtlagxhivmwescfyszodp", "jbrfnqtlagxhivmwyscaukzhdp", "jbrenqtiagxhivmbyscfuxzodp",
    "cbrrnqtuagxhivmwyscfukzodp", "jbkenqtlagxhigmwysufukzodp", "jbjewqtlagxhivmwyscfuqzodp",
    "jbrznqtlagxvivmwyscfukzovp", "jbrenttlacxhivmwyscfhkzodp", "jblenqtlagxhivmwylcfukaodp",
    "jbrenqtlagxhivmqysiftkzodp", "jbrenqtlagwhikmwyscfukqodp", "jbrenqtlegxhivmwvsckukzodp",
    "jbrenqwzagxhiamwyscfukzodp", "jbrenqtlagxhivcwyscfgkzodc", "jbrenqtlagxxhvmwxscfukzodp",
    "jbrenqtlngxhivmwyscfukoowp", "jbreomtlagxhivmwpscfukzodp", "jfrenqtlagxhivmwyscnumzodp",
    "jbrenqtlagphipmwyscfukfodp", "jvrenqtlagxhivmwyscfmkzodw", "jbrenqtlaxxoiemwyscfukzodp",
    "jbrenqtlagxhivmwyscemkzpdp", "jbrenyjldgxhivmwyscfukzodp", "jbrenqtlagxhivfvyspfukzodp",
    "kbrenctlakxhivmwyscfukzodp", "jbrmhqtlagxhivmwyscfuizodp", "jbjenqtlagxlivmbyscfukzodp",
    "jbrenqtlaaxhivmmyshfukzodp", "jbronqtlagxhirmvyscfukzodp", "jbcrnqtlagxwivmwyscfukzodp",
    "jxrenszlagxhivmwyscfukzodp", "jbpenqtlagxhivmwyscfukkody", "jbrewqtlawxhivmwyscfukzhdp",
    "jbrenqylagxhivmwlxcfukzodp", "jbrenqtlagxxivtwywcfukzodp", "jbrenqtlagxhcvgayscfukzodp",
    "jbrenitlagxhivmwiscfukzohp", "jbrenutlagxhivmwyscbukvodp", "nbrenqtlagxhivmwysnfujzodp",
    "jbrenqtlagxhivmwyqcfupzoop", "jbrenqtrarxhijmwyscfukzodp", "jbrenqtlagxhivmwysdfukzovy",
    "jbrrnqtlagxhivmwyvcfukzocp", "jbrenqtlagxhivmwyscfuvzzhp", "jbhenitlagxhivmwysufukzodp",
    "jbrenqtlagxhivmwyscfuwzoqx", "kbrenqtlagxhivmwysqfdkzodp", "jbrenqtlagxhivmwyxmfukzodx",
    "jbcenatlagxxivmwyscfukzodp", "jbrenhtlagvhdvmwyscfukzodp", "jxrenqtlafxhivfwyscfukzodp",
    "jbreaztlpgxhivmwyscfukzodp", "tqrenqtlagxfivmwyscfukzodp", "jbrenqgllgxhwvmwyscfukzodp",
    "jbrejjtlagxhivmgyscfukzodp", "jbrenqtlagxhivmwyscvukzoqv", "jbrvnqtlagxsibmwyscfukzodp",
    "jbrenqttagxhuvmwyscfukvodp", "jbrenqteagxhivmwcscfukqodp", "jbrenqtsabxhivmwyspfukzodp",
    "jbbenqtlagxhivmwyscjukztdp", "jnrenqtlagxhiimwydcfukzodp", "jbrenqtlagxhfvmwyscxukzodu",
    "jbrenqtluyxhiomwyscfukzodp", "jbrenqvlagxhivmwyscuukzolp", "ebrenqtlagxnivmwysrfukzodp",
    "jbreeqtlatxhigmwyscfukzodp", "jbrenqtvxgxhivmwyscfukzedp", "jbrmnqtlagxhivmwywcfuklodp",
    "jbreeqtvagxhivmwyscfukzody", "jbrenptlagxhivmxyscfumzodp", "jbrenqtlagxhivmwysgfukzfsp",
    "jurenqtlagjhivmwkscfukzodp", "jbrenntlagxhivmwtscffkzodp", "jbrenqglagxhivmwyocfokzodp",
    "wbrenqtlagxhivmwhscfukiodp", "jbrenqtligxhivmqascfukzodp", "jbrenqtlagxhivmwxscfukpojp",
    "jurenqtlagxhivmmyscfbkzodp", "jbrenqtmagxhivmwyscfrbzodp", "jcrenqtlagxhivmwysefukzodm",
    "jbrenqtlagxhicmwywcfukzodl", "jbvanqtlagfhivmwyscfukzodp", "jbmenqjlagxhivmwyscfdkzodp",
    "jbrenqtlagohivvwysctukzodp", "jbrenqtdagxdivmwyscfckzodp", "kbrefqtlagxhivmwyscfuazodp",
    "jbrwnqtoagxhivmwyswfukzodp", "jjhenqtlagxhivmwyscfukzorp", "jbgsnqtlagxhivkwyscfukzodp",
    "jbrynqtlagxhivmsyspfukzodp", "jbrenftlmkxhivmwyscfukzodp", "nbrenqtxagxhmvmwyscfukzodp",
    "jbrunqtlagxhijmwysmfukzodp", "jbrenqtlagmaivmwyscfukzowp", "jbrerqtlagxhihmwyscfukzudp",
    "jbrenqtlagahivmwysckukzokp", "kbrenqtlagxhirmwyscfupzodp", "jbrrnqtlagxhivmwyecfukzodz",
    "jbrenqtlavxhivmwyscfusiodp", "jnrenqtlagxhivmwyhcfukzodw", "jbretqtlagfhivmwyscfukzrdp",
    "jbreoqtnagxhivmwyscfukzopp", "jbrenbtllgxhivmwsscfukzodp", "jbrenqtlmgxhivmwyscfuwzedp",
    "jbnenqtlagxhivbwyscfukzokp", "jbrenqslagxhivmvyscfukzndp", "jbrenqtlagxzivmwuscfukztdp",
    "gbrenqtlagxhyvmwyscfukjodp", "jbrenqteagxhivmwyscfuszedp", "jbrenqtlaglhivmwysafukkodp",
    "jbrenqtlagxhcvmwascfukzogp", "jbrenqtlagxhsvmkcscfukzodp", "jbrenqslbgxhivmwyscfufzodp",
    "cbrenqtlagxhivkwtscfukzodp", "jbrenqtltgxhivmzyscfukzodj", "jbrgnqtlagihivmwyycfukzodp",
    "vbrenqauagxhivmwyscfukzodp", "jbrqnqtlagjhivmwyscfqkzodp", "jbrenqtlakxhivmwyscfukvobp",
    "jcrenqelagxhivmwtscfukzodp", "jbrrnqtlagxhlvmwyscfukzodw", "jbrenqtlagxhivmwkscaumzodp",
    "jbrenqdlagxhivmiescfukzodp", "jhrenqtlagxhqvmwyscmukzodp", "jbrenqtlaghhivmwyscfukkoyp",
    "jowenqtlagxyivmwyscfukzodp", "jbrenitaagxhivmwyscfqkzodp", "jbrenqtlagxhivmwyscfnkbudp",
    "jbyenqtlagxhivmiyscfukzhdp", "jbrenitlagxhibjwyscfukzodp", "jbrenqtlavxhjvmwpscfukzodp",
    "jbrenqyaagxhivmwyscflkzodp", "jbrenqylagxhivmwyicfupzodp", "jbrenqtlagxmevmwylcfukzodp",
    "lbrenqtlagxhiqmwyscfikzodp", "jbrenqtnarxhivmwyscfmkzodp", "jbrenqtlamxhivmwyscfnkzorp",
    "jbbenqtlavxhivmwyscjukztdp", "jbrenqtlagxhivmwyscfnliodp", "jbwenetlagxhivmwyscfukzodt",
    "jbrenatlagxhivmwysmfujzodp", "jbrsnstlagxhivmwyscfukgodp", "jbwvnitlagxhivmwyscfukzodp",
    "jbrenqtbagxhkvmwypcfukzodp", "jbrlnqtlafxhivmwyscfukdodp", "jbrenztlanxhivmwyscjukzodp",
    "jbrepqtlagxhivmwudcfukzodp", "jbrenqtlagxiivmwdscfskzodp", "jbrdjqtlagxhivmwyschukzodp",
    "jbrenqtoaguhivmwyccfukzodp", "jdrexqjlagxhivmwyscfukzodp", "jbrenqtlagxhovmwysckukaodp",
    "pbrfnqblagxhivmwyscfukzodp", "jbrenqtlagxrivgiyscfukzodp", "jbrelqtgagxhivmryscfukzodp",
    "jbrenqtlagxhicmwjscfikzodp", "jbrenqjlagxhivmwyscfmkjodp", "jbrenqtlagxpivmwzscgukzodp",
    "jbienqzlagxpivmwyscfukzodp", "jbrenqvlagxhivmwdscfukzodx", "owrenqtlagxhivmwyicfukzodp",
    "gbrenqtlaathivmwyscfukzodp", "jbgenqtlafxhivmwysqfukzodp", "jbrenqtlagxhivtwsscfukzokp",
    "jbrnnqylanxhivmwyscfukzodp", "ebrenqolagxhivmcyscfukzodp", "jbrenqtlarnhivgwyscfukzodp",
    "jbmenqtlagxhivmvyscfukzgdp", "jbrevqtlaglhivmwystfukzodp", "jbrenqplanthivmwyscfukzodp",
    "jbrenqtlagxhivmkyscbukzosp", "jbrenqtlagxaivmwyscfugzodo", "jbrenqplagxhnvmwyscfjkzodp",
    "jbrenqtlagxhivgwyscfusrodp", "cbrenqtlagxhivmwysmfukzody", "jbrenquwaexhivmwyscfukzodp",
    "jbredqtlagxhdvmwyscfukzoup", "jbrxnqtlagxhivmwysczukaodp", "jbrenqtlafnhivmwyscfuczodp",
    "jbbdkqtlagxhivmwyscfukzodp", "ubrenqtlagxhivkwyucfukzodp", "ebjenqtlagxhivmwyscfukzodj",
    "jbgenqtlugxxivmwyscfukzodp", "jbrenqtoagxqivmwdscfukzodp", "bbeenqtlagxhivmwyscfumzodp",
    "jbfeeqtlagxhivmwmscfukzodp", "jbrlnqtlagxhiimwescfukzodp", "jbrenqtlagwoivmwyscfukhodp",
    "jbrenqtlagnhivmwyscfuszovp",
  };

  int twos = 0;
  int threes = 0;
  for (auto& label: labels)
  {
    bool hasTwo = false;
    bool hasThree = false;
    std::multiset letters(label.begin(), label.end());
    for (auto letter: letters)
    {
      if (letters.count(letter) == 2)
      {
        hasTwo = true;
      }
      if (letters.count(letter) == 3)
      {
        hasThree = true;
      }
    }
    if (hasTwo)
    {
      ++twos;
    }
    if (hasThree)
    {
      ++threes;
    }
  }
  std::cout << twos * threes << '\n';

  bool done = false;
  for (auto const& leftLabel: labels)
  {
    for (auto const& rightLabel: labels)
    {
      auto left = leftLabel;
      auto right = rightLabel;
      auto [leftError, rightError] = std::mismatch(left.begin(), left.end(), right.begin(), right.end());
      auto leftPosition = std::distance(left.begin(), leftError);
      auto rightPosition = std::distance(right.begin(), rightError);
      if (leftPosition == rightPosition && leftError != left.end())
      {
        left.erase(leftError);
        right.erase(rightError);
        if (left == right)
        {
          std::cout << left << '\n';
          done = true;
          break;
        }
      }
    }
    if (done)
    {
      break;
    }
  }

  return 0;
}
