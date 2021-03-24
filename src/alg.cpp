// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
  int a=0,b=size-1,num=0,mid;
  while (a<b){
    mid=(a+b)/2;
     if (arr[mid] < value)
            a = mid+1;
        else
            b = mid;
    }
   if (arr[a] == value) {
        while (arr[a] == value) {
            num++;
            a++;
        }
    }
  if (num)
        return num;
    else
        return 0;
  
}
