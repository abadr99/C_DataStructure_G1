#ifndef _QUEUE_H_
#define _QUEUE_H_

#define QUEUE_MAX_SIZE (5)
namespace DSA { namespace DS { namespace Queue { namespace ARRAY {
template <typename T>

class Queue
{
private:
    uint32_t _front;
    uint32_t _rear;
    uint32_t _size;
    T _QueueArr[QUEUE_MAX_SIZE];
public: 
    Queue();
    void EnQueue(T element);
    T DeQueue();
    uint32_t GetTop();
    uint8_t GetSize();
    uint8_t IsFull();
    uint8_t IsEmpty();
    void Destroy();
    void Traverse(void (*pfun)(T data));
};

}}}}
#endif