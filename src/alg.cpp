// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
  int a = 0, b = size - 1, k = 0;
    while (a < l) {
     int mid = (a + b) / 2;
       if (arr[mid] < value)
         a = mid + 1;
       else
        b = mid;
       }
       if (arr[a] == value) {
        while (arr[a] == value) {
            b++;
            a++;
        }
    }
    if (a != 0)
       return a;
    else
       return 0;
}
