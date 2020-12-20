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

TEST(Queue, can_be_full_Queue_first)
{
	Queue<int>q(1);
	int m = 2;
	q.push(m);
	EXPECT_EQ(q.IsFull(), 1);
}

TEST(Queue, can_be_full_Queue_second)
{
	Queue<int> q(2);
	for (int i = 0; i < 2; i++)
		q.push(i);
	EXPECT_EQ(q.IsFull(),1);
}

TEST(Queue, can_be_empty_first)
{
	Queue<int>q(1);
	int m = 2;
	q.push(m);
	q.pop();
	EXPECT_EQ(q.IsEmpty(), 1);
}

TEST(Queue, can_be_empty_Queue_second)
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

	EXPECT_EQ(12, q.GetSize());
}

TEST(Queue, can_find_max)
{
	Queue<float> q(3);

	float m = 12;
	float n = 13;
	float p = 100.12;

	q.push(m);
	q.push(n);
	q.push(p);

	EXPECT_EQ(100.12, q.Max())
}

TEST(Queue, can_find_min)
{
	Queue<float> q(3);

	float m = 12;
	float n = 13;
	float p = 100;

	q.push(m);
	q.push(n);
	q.push(p);

	EXPECT_EQ(12, q.Min())
}


TEST(Queue, can_find_element_when_exist)
{
	Queue<int> q(3);

	int m = 1;
	int n = 12;
	int p = 33;

	q.push(m);
	q.push(n);
	q.push(p);

	EXPECT_EQ(0, q.find(1));
}

TEST(Queue, can_find_element_when_doesnt_exist)
{
	Queue<int> q(3);

	int m = 1;
	int n = 12;
	int p = 33;

	q.push(m);
	q.push(n);
	q.push(p);

	EXPECT_EQ(-1, q.find(34));
}



