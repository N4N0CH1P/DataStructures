#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

template <typename T>
class Node<T>{
public:
    Node<T>();
    Node<T>(T);
    Node<T> *next;
    T data;
};

template <typename T>
Node<T>::Node(){
    next = NULL;
}
template <typename T>
Node<T>::Node(T info){
    next = NULL;
    data = info;
}
#endif // NODE_H_INCLUDED
