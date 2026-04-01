#pragma once

template <typename T>
class Vector {
T *data;
int size;
int capacity;

public:
  Vector():data{nullptr}, size{0}, capacity{0}
  {  }
  void  push_back(T item){{
    if (size==capacity){
            int newcap=capacity==0?1:capacity*2;
            T* newdata=new T[newcap];
            capacity=newcap;         
            if(data!=nullptr){
                //move data to new array
                for(int i=0;i<size;i++)
                    newdata[i]=data[i];
                delete []data;
            }
            data=newdata;
    }
    data[size++]=item;
  }

  }
  T operator [] (int idx) const{
        return data[idx];
  }
  T& operator [] (int idx) {
        return data[idx];
  }

  int length() const{return size;}
 // to support looping

 class iterator{
   public: 
    iterator(T* s=nullptr):p{s}{}
    T* p;
    //it++
    iterator operator++(int ){
        p++;
        return *this;
    }
    //++it
    iterator operator++(){
        ++p;
        return *this;
    }
    T& operator*( ){return *p;}
    bool operator!=(iterator e){
        return e.p!=p;
    }
 };
iterator begin(){return iterator(data);}
iterator end(){return iterator(data+size);}



};