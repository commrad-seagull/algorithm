#include <cstdio>
#include <vector>

using namespace std;

void quick_sort(int left, int right){
    if (left < right){
        int i = left-1;
        int pivot = array[right][2];
        for(int j = left; j <= right; j++){
            if (array[j][2] < pivot){
                i++;
                swap_vector_int(i, j);
            }
            swap_vector_int(i+1, right);
        }
        int mid = i+1;
        quick_sort(left, mid-1);
        quick_sort(mid, right);
    }
}

vector<vector<int>> array;

void swap_vector_int(int x, int y){
    int tmp_int_swap;
    tmp_int_swap = array[x][1];
    array[x][1] = array[y][1];
    array[y][1] = tmp_int_swap;
    tmp_int_swap = array[x][2];
    array[x][2] = array[y][2];
    array[y][2] = tmp_int_swap;
    return;
}

int NOSS(vector<vector<int>> & arrays);

int main( ){
    //NOSS(array);
    return 0;
}

int NOSS(vector<vector<int>> & arrays){
    return 0;
}