Vecotr is a dyanmic memory container.

Intially it start with 0 items.

Each time, there is no space in the vector you double its size


class Vector {
int data;
int size;
int capacity;

public:
  Vector();
  void  push_back(int item);
  int operator [] (int idx);
  


};

