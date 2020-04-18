//
// Created by CABRIGI on 4/18/2020.
//

#include <iostream>
using namespace std;

void * _bubblesort_(
        void * _array_,
        void (*_puntero_) (void *, int _i, int _k),
        int _tam_)
{
    for (int i = 0; i < _tam_ ; i ++)
        for(int k = 0; k < _tam_-1; k++)
            _puntero_(_array_,i,k);
    return _array_;
}

void  _b_int_ (void * _vector_, int _i,int _k){
    int* vec =(int*)_vector_;
    if(vec[_i] < vec[_k]) {
        swap(vec[_k], vec[_i]);
    }
}

void  _b_float_ (void * _vector_, int _i,int _k){
    float* vec =(float*)_vector_;
    if(vec[_i] < vec[_k]) {
        swap(vec[_k], vec[_i]);
    }
}

void  _b_double_ (void * _vector_, int _i,int _k){
    double* vec =(double*)_vector_;
    if(vec[_i] < vec[_k]) {
        swap(vec[_k], vec[_i]);
    }
}

void  _b_char_ (void * _vector_, int _i,int _k){
    char* vec =(char*)_vector_;
    if(vec[_i] < vec[_k]) {
        swap(vec[_k], vec[_i]);
    }
}

int main(){
    int i = 0;
    int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
    float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
    double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
    char _array_4 [6] = {'k','a','r','l','o','s'};


    cout << "_array_1: ";
    for(int i = 0; i < sizeof(_array_1)/sizeof(_array_1[0]); i++) {
        cout << _array_1[i] << " ";
    }
    cout << endl << "_array_1 ordenado: ";
    _bubblesort_(_array_1,_b_int_,5);
    for(int i = 0; i < sizeof(_array_1)/sizeof(_array_1[0]); i++) {
        cout << _array_1[i] << " ";
    }
    cout << endl << endl << "_array_2: ";
    for(int i = 0; i < sizeof(_array_2)/sizeof(_array_2[0]); i++) {
        cout << _array_2[i] << " ";
    }
    cout << endl << "_array_2 ordenado: ";
    _bubblesort_(_array_2,_b_float_,5);
    for(int i = 0; i < sizeof(_array_2)/sizeof(_array_2[0]); i++) {
        cout << _array_2[i] << " ";
    }
    cout << endl << endl << "_array_3: ";
    for(int i = 0; i < sizeof(_array_3)/sizeof(_array_3[0]); i++) {
        cout << _array_3[i] << " ";
    }
    cout << endl << "_array_3 ordenado: ";
    _bubblesort_(_array_3,_b_double_,5);
    for(int i = 0; i < sizeof(_array_3)/sizeof(_array_3[0]); i++) {
        cout << _array_3[i] << " ";
    }
    cout << endl << endl << "_array_4: ";
    for(int i = 0; i < sizeof(_array_4)/sizeof(_array_4[0]); i++) {
        cout << _array_4[i] << " ";
    }
    cout << endl << "_array_4 ordenado: ";
    _bubblesort_(_array_4,_b_char_,6);
    for(int i = 0; i < sizeof(_array_4)/sizeof(_array_4[0]); i++) {
    }
}
