#include <iostream>
#include <algorithm>
using namespace std;
// ques : for rotating an image (anticlockwise)
//1 way (easy) to take a matrix , rotate its rows and then take transpose of the matrix

//solution:

//to rotate the array :

// reverse each row
void rotate_without_STL(int a[][1000], int n){
    for (int row =0;row<n; row ++){
        int start_col=0;
        int end_col=n-1;
        while(start_col<end_col){
            swap(a[row][start_col], a[row][end_col]);
            start_col++;
            end_col--;
        }
    }

    // for transpose
    for (int i=0;i<n ;i++){
        for (int j=0; j<n ; j++){
            if (i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }
}

/*

// to rotate using STL;
void rotate_using_STL(int a[][1000],int n){

    //reverse (start_col,end_col)
    for(int i=0; i<n;i++){
        reverse(a[i],a[i+n])   //a[i] is row pointer for starting element , a[i+n] i sfor ending row element

    }

    //for transpose 
    for (int i=0;i<n ;i++){
        for (int j=0; j<n ; j++){
            if (i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }

}
*/

int main() {
    int a[1000][1000];
    int n ;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    rotate_without_STL(a,n);
    //rotate_using_STL;
    display(a,n);

    return 0;
    
}
