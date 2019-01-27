#include "Stack_Complete.hpp"

namespace training
{
  template <typename T>
  Stack<T>::Stack(const std::initializer_list<T>& iList)
    : m_Elements(iList)
  {}

  template <typename T>
  int Stack<T>::size() const
  {
    return m_Elements.size();
  }

  template <typename T>
  bool Stack<T>::empty() const
  {
    return m_Elements.empty();
  }

  template <typename T>
  void Stack<T>::push(const T& value)
  {
    m_Elements.push_back(value);
  }

  template <typename T>
  T Stack<T>::pop()
  {
    if (empty())
    {
      throw std::out_of_range("pop on empty stack");
    }
    auto lastElement = m_Elements.back();
    m_Elements.pop_back();
    return lastElement;
  }

  template <typename T>
  T Stack<T>::peek()
  {
    if (empty())
    {
      throw std::out_of_range("peek on empty stack");
    }
    return m_Elements.back();
  }
}
