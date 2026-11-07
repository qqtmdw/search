//#include <iostream>
//using namespace std;
//
//void Sort(int arr[], int size, int order = 1)
//{
//    for (int i = 0; i < size - 1; i++)
//    {
//        for (int j = 0; j < size - 1; j++)
//        {
//            if ((order == 1 && arr[j] < arr[j + 1]) ||
//                (order == 0 && arr[j] > arr[j + 1]))
//            {
//                swap(arr[j], arr[j + 1]);
//            }
//        }
//    }
//}
//
//int main()
//{
//    int arr[10];
//
//    for (int i = 0; i < 10; i++)
//        cin >> arr[i];
//
//    Sort(arr, 10);
//
//    for (int i = 0; i < 10; i++)
//        cout << arr[i] << " ";
//
//    return 0;
//}