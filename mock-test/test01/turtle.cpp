#include <gmock/gmock.h>  // Brings in gMock.

class Turtle {
  virtual ~Turtle() {}
  virtual int GetX() const = 0;
  virtual int GetY() const = 0;
};



class MockTurtle : public Turtle {
 public:
  MOCK_METHOD(int, GetX, (), (const, override));
  MOCK_METHOD(int, GetY, (), (const, override));
};


// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

