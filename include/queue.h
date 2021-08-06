#ifndef QUEUE_H
#define QUEUE_H
template <class T> class Queue
{
    private:
        T* arr;
        int front_idx;
        int rear_idx;
        int n;
        int capacity;
    public:
        Queue();
        int get_NO_Elements();
        void reserve(int new_capacity);
        void push(T new_data);
        void pop();
        void traverse();
        T Front();
        T Back();
};

template <class T> Queue<T>::Queue()
{
  front_idx = 0;
  rear_idx = 0;
  capacity = 0;
  n = 0;
  arr = new T;
}

template <class T> int Queue<T>::get_NO_Elements(){
    return n;
}

template <class T> void Queue<T>::reserve(int new_capacity)
{
    T* temp = new T[new_capacity];

    for(int i = 0 ; i < n ; i++){
        temp[i] = arr[(front_idx + i)%capacity];
    }

    delete[] arr;

    arr = temp;

    if(n == 0){
        front_idx = rear_idx = 0;
    }
    else{
        front_idx = 0 , rear_idx = n-1;
    }

    capacity = new_capacity;

}

template <class T> void Queue<T>::push(T new_data){
    if(n == capacity){
        reserve(2 * capacity + 1);
    }
    if (n == 0)
        front_idx = rear_idx = 0;
	else
		rear_idx = (rear_idx + 1) % capacity;

    arr[rear_idx] = new_data;

    n+=1;
}

template <class T> void Queue<T>::pop(){
    if(n == 0){
        return;
    }

    if(front_idx == rear_idx){
        front_idx = rear_idx = 0;
    }
    else{
        front_idx = (front_idx + 1)%capacity;
    }
    n -= 1;
    if(n < capacity/2){
        reserve(capacity/2 );
    }
}

template <class T> T Queue<T>::Front()
{
    if(n == 0){
        return INT_MAX;
    }
    return arr[front_idx];
}

template <class T> T Queue<T>::Back()
{
    if(n == 0){
        return INT_MAX;
    }
    return arr[rear_idx];
}
#endif // QUEUE_H
