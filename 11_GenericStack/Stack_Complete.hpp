#include <initializer_list>
#include <string>
#include <vector>
#include <stdexcept>

namespace training
{
  template <typename T>
  class Stack
  {
    public:
      Stack(const std::initializer_list<T>& iList)
        : m_Elements(iList)
      {}

      int size() const { return m_Elements.size(); }

      bool empty() const { return m_Elements.empty(); }

      void push(const T& value) { m_Elements.push_back(value); }

      T pop()
      {
        if (empty())
        {
          throw std::out_of_range("pop on empty stack");
        }
        auto lastElement = m_Elements.back();
        m_Elements.pop_back();
        return lastElement;
      }

      T peek()
      {
        if (empty())
        {
          throw std::out_of_range("peek on empty stack");
        }
        return m_Elements.back();
      }


    private:
      std::vector<T> m_Elements;
  };
}
