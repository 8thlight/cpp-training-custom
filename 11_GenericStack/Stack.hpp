#include <initializer_list>
#include <string>
#include <vector>

namespace training
{
  class Stack
  {
    public:
      Stack(const std::initializer_list<std::string>& iList);

      int size() const;

      bool empty() const;

      void push(const std::string& value);

      std::string pop();

      std::string peek();


    private:
      std::vector<std::string> m_Elements;
  };
}
