#ifndef __TRAINING_STRING_HPP__
#define __TRAINING_STRING_HPP__

namespace training
{
  class String
  {
    public:
      String(const char* inputString);

      ~String();

      char* getString();

    private:
      char* m_Data;
  };
}

#endif
