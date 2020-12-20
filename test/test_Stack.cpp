#include "Stack.h"
#include <gtest.h>

TEST(Stack, can_create_copied_stack)
{
 Stack<int> v(3);

  ASSERT_NO_THROW(Stack<int> v1(v));
}


TEST(Stack, can_create_stack_with_positive_length)
{
	ASSERT_NO_THROW(Stack<int> v(8));
}

TEST(Stack, can_create_stack_with_zero_size)
{
	ASSERT_NO_THROW(Stack<int> v(0));
}

TEST(Stack, throws_when_create_stack_with_negative_length)
{
	ASSERT_ANY_THROW(Stack<int> v(-6));
}


TEST(Stack, can_get_size)
{
  Stack<int> v(21);
  EXPECT_EQ(21, v.GetSize());
}

TEST(Stack, copied_stack_has_its_own_memory)
{
	Stack<int>A(3);
	Stack<int>B(A);
	EXPECT_NE(A.GetMemory(), B.GetMemory());
}


TEST(Stack, can_get_size_second)
{
	Stack<int> v(3);
	EXPECT_EQ(3, v.GetSize());
}


TEST(Stack, can_get_start_index)
{
  Stack<int> v(4);

  EXPECT_EQ(0, v.GetFirst());
}

TEST(Stack, can_be_full_stack)
{
	Stack<int>q(1);
	int m = 2;
	q.push(m);
	EXPECT_EQ(q.IsFull(), 1);
}

TEST(Stack, can_be_full_stack)
{
	Stack<int>q(3);

	int m = 22;
	int s = 32;
	int k = 21;

	q.push(22);
	q.push(32);
	q.push(21);

	EXPECT_EQ(q.IsFull(), 1);
}

TEST(Stack, can_be_empty_stack)
{
	Stack<int>q(1);
	int n = 3;
	q.push(n);
	q.pop();
	EXPECT_EQ(q.IsEmpty(), 1);
}

TEST(Stack, can_be_empty_stack_second)
{
	Stack<int>q(1);
	int m = 2;
	q.push(m);
	q.pop();
	EXPECT_EQ(q.IsEmpty(), 1);
}


TEST(Stack, can_find_element_when_exist)
{
	Stack<int> q;

	m = 12;
	n = 32;
	p = 16;

	q.push(m);
	q.push(n);
	q.push(p);

	EXPECT_EQ(q.find(16), 0);
}

TEST(Stack, can_find_min_elemnet_stack)
{
	Stack<int> stack;

	t1 = 12;
	t2 = 33;

	stack.push(t1);
	stack.push(t2);

	EXPECT_EQ(stack.min(),12);
}

TEST(Stack, can_find_max_element_stack)
{
	Stack<int> stack;

	t2 = 33;
	t3 = 14;

	stack.push(t1);
	stack.push(t2);

	EXPECT_EQ(stack.max(), 33);
}
