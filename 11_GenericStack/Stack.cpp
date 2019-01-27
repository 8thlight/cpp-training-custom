#include "Stack.hpp"

namespace training
{
  Stack::Stack(const std::initializer_list<std::string>& iList)
    : m_Elements(iList)
  {}

    int Stack::size() const
    {
      return m_Elements.size();
    }

    bool Stack::empty() const
    {
      return m_Elements.empty();
    }

    void Stack::push(const std::string& value)
    {
      m_Elements.push_back(value);
    }

    std::string Stack::pop()
    {
      if (empty())
      {
        throw std::out_of_range("pop on empty stack");
      }
      std::string lastElement = m_Elements.back();
      m_Elements.pop_back();
      return lastElement;
    }

    std::string Stack::peek()
    {
      if (empty())
      {
        throw std::out_of_range("peek on empty stack");
      }
      return m_Elements.back();
    }
}
