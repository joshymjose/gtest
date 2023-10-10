#include <gtest/gtest.h>
#include <queue>
#include <string>
#include <gmock/gmock.h>  // Brings in gMock.

using namespace std;

class Foo {
 public:
  virtual ~Foo();
  virtual int GetSize() const = 0;
};

class MockTurtle : public Foo {
 public:

  MOCK_METHOD(int, GetSize, (), (const, override));
};