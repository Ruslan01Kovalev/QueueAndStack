#include "Queue.h"

#include <gtest.h>

TEST(Queue, can_create_Queue_with_positive_length)
{
	ASSERT_NO_THROW(Queue<int> v(3));
}

TEST(Queue, can_create_Queue_with_zero_size)
{
	ASSERT_NO_THROW(Queue<int> v(0));
}

TEST(Queue, throws_when_create_Queue_with_negative_length)
{
	ASSERT_ANY_THROW(Queue<int> v(-6));
}

TEST(Queue, IsFull)
{
	Queue<int>q(1);
	int m = 2;
	q.push(m);
	EXPECT_EQ(q.IsFull(), 1);
}

TEST(Queue, IsFull_second)
{
	Queue<int> q(2);
	for (int i = 0; i < 2; i++)
		q.push(i);
	EXPECT_EQ(q.IsFull(),1);
}

TEST(Queue, IsEmpty)
{
	Queue<int>q(1);
	int m = 2;
	q.push(m);
	q.pop();
	EXPECT_EQ(q.IsEmpty(), 1);
}

TEST(Queue, IsEmpty_second)
{
	Queue<double> q(2);
	for (int i = 0; i < 2; i++)
		q.push(i);

	for (int i = 0; i < n; i++)
		q.pop();

	EXPECT(q.IsEmpty(), 1);
}

TEST(Queue, can_create_copied_Queue)
{
	Queue<int> v(13);

	ASSERT_NO_THROW(Queue<int> v1(v));
}

TEST(Queue, copied_Queue_has_its_own_memory)
{
	Queue<int>A(8);
	Queue<int>B(A);
	EXPECT_NE(A.GetMemory(), B.GetMemory());
}

TEST(Queue, can_get_size)
{
	Queue<int> v(5);

	EXPECT_EQ(5, v.GetSize());
}
TEST(Queue, can_get_size_second)
{
	Queue<int> q(12);

	EXPECT_EQ(5, q.GetSize());
}





