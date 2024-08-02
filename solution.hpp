#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures){
        stack<int> st;
        vector<int> res(temperatures.size(),0);
        for(int i=0; i<temperatures.size(); i++){
            //mientras la temperatura actual sea mayor que la temperatura del indice
            //en la parte superior de la pila
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){ //[st.top()] inicializa con cero que es el primer indice
                int idx=st.top(); 
                st.pop();
                res[idx]=i-idx; //cantidad de dias que han pasado
            }
            st.push(i); //actualizacion del dia que sigue
        }
        return res;
    }
};


#endif // SOLUTION_HPP