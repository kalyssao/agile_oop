#include "mystr.h"
#include "gtest/gtest.h"

namespace {
	class MyStringTest: public ::testing::Test {};
	TEST_F(MyStringTest, Test_strlen) {
		ASSERT_EQ(5, strlen("hello"));
	}

	TEST_F(MyStringTest, Test_strcpy){
		char str1[]= "a";
		char str2[] = "b";

		char *cp = str1;
		char const *cp2 = str2;
		ASSERT_STREQ("hello", strcpy(cp, cp2));
	}

	TEST_F(MyStringTest, Test_strcat){
		char str1[] = "acd";
		char str2[] = "bee";

		char *cp = str1;
		char const *cp2 = str2;
		ASSERT_STREQ("acdbee", strcat( cp, cp2));
		
	}
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}