#include "queue.h"

template<class T> Queue<T>::Queue()
{
    front_idx = 0;
    rear_idx = 0;
    capacity = 0;
}

template<class T> int Queue<T>::get_capacity(){
    return Queue::capacity;
}
