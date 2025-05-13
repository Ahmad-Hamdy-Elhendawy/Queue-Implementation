	#include <iostream>
	#include <vector>
	using namespace std;

	class MyQueue
	{

	public:
		int arr[5];
		int head;
		int tail;
		int size;
		MyQueue() {
			head = -1, tail = -1;
			size = sizeof(arr) / sizeof(arr[0]);
		}

		bool IsEmpty()
		{
			return (head == -1 && tail == -1);
		}
		bool IsFull()
		{
			return ((head == 1 && tail == size - 1) || (tail = head - 1));
		}

		void enQueue(int value)
		{
			if (IsFull())
				return;

			if (IsEmpty())
			{
				tail = 0, head = 0;
				arr[tail] = value;
				return;

			}
			else if (tail = size - 1)
			{
				tail = 0;
				arr[tail] = value;
			}
			else
			{
				arr[++tail] = value;
			}
		}

		void deQueue()
		{
			if (IsEmpty()) return;
			else if (tail == head) { head = tail = -1; }
			else if (head == size - 1) head = 0;
			else  head++;
			return;
		}

		void Display()
		{
			int counter = 0;
			if (IsEmpty()) return;

			else if (tail >= head)
			{
				for (int i = head; i < tail; i++)
				{
					cout << arr[i] << " ";
				}
			}
			else if (head > tail && IsFull())
			{
				for (int i = tail; i < head; i++)
				{
					cout << arr[i] << " ";
				}
			}
			else // head > tail && !IsFull
			{
				for (int i = tail; i < head; i++)
				{
					if (tail == size - 1)
					{

						tail = counter;
						cout << arr[tail++] << " ";
						counter++;
					}
				}
				cout << endl;
			}

		}
	};
		int main()
		{
			MyQueue queue;

			queue.enQueue(10);
			queue.enQueue(9);
			queue.enQueue(8);
			queue.enQueue(7);
			queue.Display();

			queue.deQueue();
			queue.Display();
		}


