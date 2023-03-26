#include <iostream>
using namespace std;

void print_arr(int arr[][6]) {
  int ROW = 2;
  int COL = 6;
  for (int i = 0; (i < ROW); i++) {
    for (int j = 0; j < COL; j++) {
      cout << arr[i][j];
    }
    cout << endl;
  }
}

int main() {
  const int ROW = 2;
  const int COL = 6;
  //--------ACT - 1 нсчало банкета---------------------------------
  int cutlery[ROW][COL] // Столовые приборы
      {
          {3, 3, 3, 3, 3, 3},
          {3, 3, 3, 3, 3, 3}
      };
// Добавляем десертные ложки для VIP
  cutlery[0][0] += 1;
  cutlery[1][0] += 1;
  cout << "Cutlery: " << endl;
  print_arr(cutlery);
  int plates[ROW][COL] // Тарелки
      {
          {2, 2, 2, 2, 2, 2},
          {2, 2, 2, 2, 2, 2}
      };
// Добавляем десертные тарелки для VIP
  plates[0][0] += 1;
  plates[1][0] += 1;
  cout << "Plates: " << endl;
  print_arr(plates);
  int chairs[ROW][COL] // Стулья
      {
          {1, 1, 1, 1, 1, 1},
          {1, 1, 1, 1, 1, 1}
      };
  cout << "Chairs: " << endl;
  print_arr(chairs);
  //--------ACT - 2 добавляем стул---------------------------------
  chairs[0][4] += 1;
  cout << "Chairs: " << endl;
  print_arr(chairs);
  //--------ACT - 3 украденная ложка-------------------------------
  cutlery[1][2] -= 1;
  cout << "Cutlery: " << endl;
  print_arr(cutlery);
  //--------ACT - 4 Vip отдает ложку-------------------------------
  cutlery[0][0] -= 1;
  cutlery[1][2] += 1;
  cout << "Cutlery: " << endl;
  print_arr(cutlery);
  //--------ACT - 5 У Vip забирают тарелку-------------------------
  plates[0][0] -= 1;
  cout << "Plates: " << endl;
  print_arr(plates);
}
