#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <ostream>
template <typename T> class Matrix {
  private:
    T **m;
    int dim;
  public:
    Matrix<T> operator* (const Matrix<T> &b) const;
    friend std::ostream& operator<< (std::ostream& ausgabe, Matrix a);
    void set(int x, int y, T val);
    T get(int x, int y) const;
    Matrix(int size);
    Matrix(const Matrix<T>& other);
    ~Matrix(){
      for (int i = 0; i < dim; i++) {
        delete[] m[i];
      }
      delete[] m;
    }
    
};

template <typename T> std::ostream& operator<<(std::ostream& ausgabe, const Matrix<T>& m){
  for(int i = 0; i < m.dim; i++){
    for(int j = 0; j < m.dim; j++){
      ausgabe << m.get(i,j) << "\t";
    }
    ausgabe << "\n";
  }
  return ausgabe;
}

template <typename T> Matrix<T> Matrix<T>::operator*(const Matrix<T>& b) const
{
    Matrix<T> result(dim);

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            for (int k = 0; k < dim; k++) {
                result.set(i, j,
                    result.get(i, j) + this->get(i, k) * b.get(k, j)
                );
            }
        }
    }

    return result;
}

template <typename T> void Matrix<T>::set(int x, int y, T val){
  m[x][y] = val;
}

template <typename T> T Matrix<T>::get(int x, int y) const{
  return m[x][y];
}

template <typename T> Matrix<T>::Matrix(int size){
  dim = size;
  m = new T*[dim];
  for(int i = 0; i < dim; i++){
    m[i] = new T[dim];
  }
}

template <typename T> Matrix<T>::Matrix(const Matrix<T>& other): dim(other.dim)
{
    m = new T*[dim];

    for (int i = 0; i < dim; i++) {
        m[i] = new T[dim];
        for (int j = 0; j < dim; j++) {
            m[i][j] = other.m[i][j];
        }
    }
}
#endif
