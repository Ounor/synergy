#include <iostream>
#include <string>
 using namespace std;

int main()
{

  //task 1
  
    int arr[7] = {
        1, 2, 3,4,5,6,7
    };  
  
    for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++) {
        cout << arr[i] << endl;
    }

  //task2

    int lenght;
    cout << "Введите длину массива: ";
    cin >> lenght;
    int randArray[lenght];
  
    for(int i=0;i<lenght;i++) {
      randArray[i]=rand()%10;
    }
  
    for(int i=0;i<lenght;i++) {
          cout << randArray[i] << " ";
    }


  // task2 еще вариант так как не понял задание)


    int lenght;
    cout << "Введите длину массива: ";
    cin >> lenght;
  
    int randArray[lenght];
  
    for(int i=0;i<lenght;i++) {
     cout << "Введите число для добавления в массив: ";
     cin >> randArray[i];
     cout << endl;
    }

    for(int a=0;a<lenght;a++) {
      cout << randArray[a] << " ";
    }

}
