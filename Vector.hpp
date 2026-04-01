#pragma once

class Vector {
int *data;
int size;
int capacity;

public:
  Vector():data{nullptr}, size{0}, capacity{0}
  {  }
  void  push_back(int item){{
    if (size==capacity){
            int newcap=capacity==0?1:capacity*2;
            int* newdata=new int[newcap];
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
  int operator [] (int idx) const{
        return data[idx];
  }
  int& operator [] (int idx) {
        return data[idx];
  }

  int length() const{return size;}
 // to support looping

 class iterator{
   public: 
    iterator(int* s=nullptr):p{s}{}
    int* p;
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
    int& operator*( ){return *p;}
    bool operator!=(iterator e){
        return e.p!=p;
    }
 };
iterator begin(){return iterator(data);}
iterator end(){return iterator(data+size);}



};