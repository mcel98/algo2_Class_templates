#include "gtest/gtest.h"
#include "../src/Templates.cpp"

TEST(Base, cuadrado) {
  EXPECT_EQ(cuadrado(5), 25);
  EXPECT_EQ(cuadrado(10), 100);
  EXPECT_EQ(cuadrado(1), 1);
}

TEST(Base, contiene) {
  EXPECT_TRUE(contiene("Hola todos", 't'));
  EXPECT_TRUE(contiene("Hola todos", 'H'));
  EXPECT_TRUE(contiene("Hola todos", ' '));
  EXPECT_FALSE(contiene("Hola todos", 'h'));
}
