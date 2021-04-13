#include "ListOnArray.h"
#include <gtest.h>

TEST(list, can_create_list)
{
	ASSERT_NO_THROW(ListOnArray<int> list);
}

TEST(list, can_push_back)
{
	ListOnArray<int> list1(10);

	list1.push_back(3);
	list1.push_back(33);
	list1.push_back(333);

	EXPECT_EQ(333, lst.pop_back());
}

TEST(list, can_push_front)
{
	ListOnArray<int> l(10);

	l.push_back(1);
	l.push_front(10);

	EXPECT_EQ(10, l.pop_front());
}

TEST(list, can_pop_back)
{
	ListOnArray<int> list(10);

	list.push_back(67);
	list.push_back(12);
	list.pop_back();

	EXPECT_EQ(67, list.pop_back());
}

TEST(list, can_copy)
{
	ListOnArray<int> lst;
	lst.push_back(101);

	ListOnArray<int> lst2(lst);
	ListOnArrayIterator<int> i = lst2.begin();
	EXPECT_EQ(101, *i);
}

TEST(list, cant_pop_in_empty_list)
{
	ListOnArray<int> lst;
	ASSERT_ANY_THROW(lst.pop_back());
}

