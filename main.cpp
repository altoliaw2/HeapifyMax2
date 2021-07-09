#include <algorithm>
#include <iostream>

int main() {
    int ia_Arr[] = { 12, 11, 13, 5, 6, 7 };
	int i_Size = sizeof(ia_Arr) / sizeof(int);
    std::make_heap(ia_Arr, ia_Arr+ i_Size);
    for(int i_Ct=0; i_Ct< i_Size; i_Ct++){
        std::cout<< ia_Arr[i_Ct] << " ";
    }
    std::cout<< "\n";
    ia_Arr[0] = ia_Arr[(i_Size -1)];
    i_Size--;
    std::make_heap(ia_Arr, ia_Arr+ i_Size);

    for(int i_Ct=0; i_Ct< i_Size; i_Ct++){
        std::cout<< ia_Arr[i_Ct] << " ";
    }
}
