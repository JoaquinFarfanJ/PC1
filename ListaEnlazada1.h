//Pregunta 6 de la PC1
#ifndef __LISTAENLAZADA1_H__  
#define __LISTAENLAZADA1_H__ 

using namespace std;

template <typename T>
class Node
{private:
  T         m_data;
  Node<T>   *m_pNext;
  public:
  Node(T data, Node<T> *pNext = nullptr) : m_data(data), m_pNext(pNext)
  {};
  T         getData()                 {   return m_data;  }
  void      setpNext(Node<T> *pNext)  {   m_pNext = pNext;  }
  Node<T>   *getpNext()               {   return m_pNext;   }
};

template <typename T>
class LinkedList
{
  private:
    Node<T> *m_pHead = nullptr, 
            *m_pTail = nullptr;

  public:
  void  insert_at_head (T elem);
  void  insert_at_tail(T elem);
  T     PopHead();

  void print(ostream &os);
};


template <typename T>
void LinkedList<T>::insert_at_head(T elem)
{
  Node<T> *pNew = new Node(elem); 
  if(m_pTail)
  { m_pTail->setpNext(pNew); }
    m_pTail = pNew;
    
  if (!m_pHead)
  {m_pHead = pNew;  }
}

template <typename T>
void LinkedList<T>::insert_at_tail(T elem)
{
    Node<T> *pNew = new Node(elem);
    if(m_pTail)
    {
      m_pTail->setpNext(pNew);
    }
    m_pTail = pNew;
    if(!m_pHead)
    {
      m_pHead = pNew;
    }
}


template <typename T>
T LinkedList<T>::PopHead()
{
  if(m_pHead)
  {
    Node<T> *pNode = m_pHead;
    T data = pNode->getData();
    m_pHead = m_pHead->getpNext();
    delete pNode;
    return data;
  }
  return 0;
}

template <typename T>
void LinkedList<T>::print(ostream &os)
{
  Node<T> *pNode = m_pHead;
  while(pNode)
  {
    os << pNode->getData() << ", ";
    pNode = pNode->getpNext();
  }
  os <<endl;
}

#endif