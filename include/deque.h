#ifndef DEQUE_H
#define DEQUE_H
#include<iostream>
using namespace std;
template <class T> class Deque
{
    private:
        T* arr;
        int front_idx;
        int rear_idx;
        int n;
        int capacity;
    public:
        Deque();
        int get_NO_Elements();
        void reserve(int new_capacity);
        void insert_begin(T new_data);
        void insert_end(T new_data);
        void delete_begin();
        void delete_end();
        void traverse();
        T Front();
        T Back();
        void print_deque();
        void print_deque_reverse();
};

template <class T> Deque<T>::Deque()
{
  front_idx = 0;
  rear_idx = 0;
  capacity = 0;
  n = 0;
  arr = new T;
}

template <class T> int Deque<T>::get_NO_Elements(){
    return n;
}

template <class T> void Deque<T>::reserve(int new_capacity)
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

template <class T> void Deque<T>::insert_begin(T new_data){
    if(n == capacity){
        reserve(2 * capacity + 1);
    }
    if (n == 0)
        front_idx = rear_idx = 0;
	else
		front_idx = (front_idx - 1 + capacity) % capacity;

    arr[front_idx] = new_data;

    n+=1;
}

template <class T> void Deque<T>::insert_end(T new_data){
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

template <class T> void Deque<T>::delete_begin(){
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

template <class T> void Deque<T>::delete_end(){
    if(n == 0){
        return;
    }

    if(front_idx == rear_idx){
        front_idx = rear_idx = 0;
    }
    else{
        rear_idx = (rear_idx - 1 + capacity)%capacity;
    }
    n -= 1;
    if(n < capacity/2){
        reserve(capacity/2 );
    }
}

template <class T> T Deque<T>::Front()
{
    if(n == 0){
        return INT_MAX;
    }
    return arr[front_idx];
}

template <class T> T Deque<T>::Back()
{
    if(n == 0){
        return INT_MAX;
    }
    return arr[rear_idx];
}

template <class T> void Deque<T>::print_deque(){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[(front_idx + i)%capacity]<<" ";
    }
}

template <class T> void Deque<T>::print_deque_reverse(){
    for(int i = n-1 ; i >= 0 ; i--){
        cout<<arr[(front_idx + i)%capacity]<<" ";
    }
}

#endif // DEQUE_H
