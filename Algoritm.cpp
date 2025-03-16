#include <iostream>

using namespace std;

int AlgoritmBinopoisk(int Number, int arrayy[], int size);

int main ()
{
    int Number;
    int size = 9;
    int arrayy[size]{15,16,17,18,19,19,19,29,30}; 
    cout << "Введите точку отсчёта: ";
    cin >> Number ;
    int Result = AlgoritmBinopoisk(Number,arrayy,size);
    cout << "Количество элементов в массиве больших, чем"<< Number << ":" << Result ;
}

int AlgoritmBinopoisk(int Number, int arrayy[],int size)
{
   int count = 0;
   int right  = size - 1 ;
   int left  = 0;
   while (left <= right) 
   {
    int middle = (right + left)/2;
    if(arrayy[middle] == Number)
    {
        left = middle + 1;
    }
    else if (arrayy[middle]>Number)
    {
        count +=  (right - middle + 1);
        right = middle - 1;
    } 
    else if (arrayy[middle] < Number)
    {
        left = middle+ 1;
    }
   
   }
   return count;

}