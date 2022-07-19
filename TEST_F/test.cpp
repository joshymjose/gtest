#include <gtest/gtest.h>
#include <queue>


class Foo {
 private:
  int id;
 public:
  Foo(int x) {
    id = x;
  }

  void set_value(int x) {
    id = x;
  }
  int get_value() {
    return id;
  }
};

class FooTest : public ::testing::Test {
 protected:
  void SetUp() override {
  }

  void TearDown() override {}

};

TEST_F(FooTest, IsEmptyInitially) {
  Foo t1(0);
  EXPECT_EQ(t1.get_value(), 0);
}