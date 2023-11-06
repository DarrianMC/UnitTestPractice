/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
    Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1,actual);
}

TEST(PasswordTest, palindrome_check)
{
	string t = "tttTrrrdj";
	int count;
	Password my_password;
	count = my_password.count_leading_characters(t);
	ASSERT_EQ(3, count);
}

TEST(PasswordTest, palindrome_chec)
{
	string t = "treTrrrdj";
	int count;
	Password my_password;
	count = my_password.count_leading_characters(t);
	ASSERT_EQ(1, count);
}

TEST(PasswordTest, repeat_whole_string)
{
	string t = "aaaaaaaaaa";
	int count;
	Password my_password;
	count = my_password.count_leading_characters(t);
	ASSERT_EQ(10, count);
}

TEST(PasswordTest, space_check)
{
	string t = "     ";
	int count;
	Password my_password;
	count = my_password.count_leading_characters(t);
	ASSERT_EQ(5, count);
}

TEST(PasswordTest, plus_check)
{
	string t = "++++++";
	int count;
	Password my_password;
	count = my_password.count_leading_characters(t);
	ASSERT_EQ(6, count);
}

TEST(PasswordTest, empty_check)
{
	string t = "";
	int count;
	Password my_password;
	count = my_password.count_leading_characters(t);
	ASSERT_EQ(0, count);
}


TEST(PasswordTest, all_lower_check)
{
	string t = "";
	bool count;
	Password my_password;
	count = my_password.has_mixed_case(t);
	ASSERT_EQ(false, count);
}

TEST(PasswordTest, all_upper_check)
{
	string t = "";
	bool count;
	Password my_password;
	count = my_password.has_mixed_case(t);
	ASSERT_EQ(false, count);
}

TEST(PasswordTest, check)
{
	string t = "";
	bool count;
	Password my_password;
	count = my_password.has_mixed_case(t);
	ASSERT_EQ(true, count);
}












