#include<iostream>
#include "m_list2.h"
#include "m_timer.h"
#include<list>
#include <algorithm>

template <typename T>
class TD;

//1. операции find, insert, push_back,push_front remove  

int main()
{
 // std::list<int> l;
  list2<int> l;//{3,4,8,10};
  l.push_back(50);
  srand(time(0));
  int j=0;
timer tm;

  for(int i=1;i<1000 ;)
  {
    int a=rand()%1000 +1 ;
  // ищем число, 
    auto el= std::find(l.begin(),l.end(),a);//l.find(a);
//  auto el= l.find(a);
    
    if(el==l.end()) 
    {
        auto ell=l.begin();
      
      // смотрим болше или меньше  первого 
    if(ell&&a < *ell)
       l.push_front(a);
     else  {
         while(ell!=l.end() && a > *ell)
            ++ell;
         
        
         
        
           
      
           
      if(ell==l.end())
         l.push_back(a);
       else
        l.insert(--ell,a);
       
     
     }
      ++i;
    } 
  //else{ //*el=0; 
  //l.remove(el);
  ////i=i-1;
     
  //}
  ++j;
  }
 
 for(auto el=l.begin(),e=l.end();el!=e;++el)
   std::cout<<*el<<" ";
    std::cout<<"\n";
 
     std::cout<<" число итераций : "<<j<<"\n";
 
    
    return 0;}
