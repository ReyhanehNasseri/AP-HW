#include<iostream>
using namespace std;


template<class T>
class CustomVector{
   private:
      T* values = new T[1];
   int index = 0;
   int maxSize = 1;


// by doing this, we create new memory and copy old data only logn times vs. n times which causes a big performance gain
// this func works the same as dynamic array growth logic   

  void reallocate(int newSize) {

   T* temp = new T [index];

   for(int i = 0 ; i < index; i++){
    temp[i]= values[i];
   }
   values = new T [newSize];

   for(int i = 0 ; i < index; i++){
    values[i]=temp[i];
   }
      delete[] temp;
  }


   public:

// PUSH BACK
  void pushback (T element){
   if(index < maxSize){
        values[index] = element;
    }
    else {
       maxSize = maxSize * 2;
       reallocate(maxSize);
       values[index]=element;
    }
    index++;
  }
  
//POP BACK 
  void popback (){
    if(index>=maxSize/2){
       values[index]=T(NULL); 

    }
    else{
        maxSize=maxSize/2;
        reallocate(maxSize);
        values[index]=T(NULL);
    }
    index--;
  }

// SIZE  
   int size (){
    return index;
  }

// PRINT 
  void print() {
    cout<<"{";
    for(int i = 0 ; i < index; i++){
        cout<<values[i] <<" ";
    
    }
    cout<<"}";

  }

//RESIZE
 void resize (int newSize ,  T newindex = T(0) ){
    if(newSize>=size()){
        for(int i = index ; i<=newSize; i++){
            pushback(newindex);
        }
    }
    else{
        
        for(int i = index ; i>=newSize; i--){
            popback();
        }

    }
 }
    ~CustomVector()
{
    delete[] values;
}
};


int main(){
    
    CustomVector<int> vector1;
    CustomVector<char> vector2;
    vector1.pushback(3);
    vector1.pushback(5);
    vector1.pushback(4);
    vector1.pushback(6);
    vector2.pushback('c');
    vector1.resize(11,6);
   vector1.print();
    vector2.print();
   cout<<vector1.size();
   


    return 0;
}
