Class: MyQueue
- Data Members:
  - int arr[5]: Static array to hold queue elements.
  - int head: Index of the front of the queue.
  - int tail: Index of the rear of the queue.
  - int size: Maximum size of the queue (5).

- Constructor:
  - Initializes `head` and `tail` to -1, indicating the queue is empty.
  - Sets `size` to the number of elements the array can hold.

- bool IsEmpty()
  - Returns true if both `head` and `tail` are -1.

- bool IsFull()
  - Returns true if the queue is full.
  - Note: Contains a logical error in `(tail = head - 1)` — this is assignment, not comparison.

- void enQueue(int value)
  - Inserts an element at the tail of the queue.
  - If the queue is full, does nothing.
  - Handles wrapping of tail index to implement circular behavior.
  - Note: Bug exists due to use of assignment `=` in `else if (tail = size - 1)` instead of comparison `==`.

- void deQueue()
  - Removes the element at the head of the queue.
  - Adjusts head index and wraps if necessary.

- void Display()
  - Prints the current elements of the queue.
  - Handles all cases of head and tail index positions including circular wrapping.
  - The logic in display is unnecessarily complex and partially incorrect.

Main Function:
--------------
- Creates a `MyQueue` object.
- Enqueues four elements: 10, 9, 8, and 7.
- Displays the queue.
- Dequeues one element.
- Displays the queue again.
