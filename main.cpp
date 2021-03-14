// #include <iostream>

// using namespace std;

// void inputMatrix(int **matrix, int &rows, int &cols)
// {
//     cin >> rows;
//     cin >> cols;
//     for (int i = 0; i < rows; i++)
//         for (int j = 0; j < cols; j++)
//             cin >> matrix[i][j];
// }
// void printMatrix(int **matrix, int rows, int cols)
// {
//     cout << matrix[0][0];
//     for (int i = 1; i < cols; i++)
//         cout << ' ' << matrix[0][i];
//     for (int i = 1; i < rows; i++)
//     {
//         cout << endl;
//         cout << matrix[i][0];
//         for (int j = 1; j < cols; j++)
//             cout << ' ' << matrix[i][j];
//     }
// }
// int calculateWithWeight(int data[], int weight[], int count)
// {
//     // TODO your code here
//     int resul = 0;
//     for (int i = 0; i < count; i++)
//         resul += data[i] * weight[i];
//     return resul;
// }
// void printByPattern(int data[], int count)
// {
//     //TODO your code here
//     // if (count == 1)
//     // {
//     //     cout << data[count - 1];
//     //     return;
//     // }
//     // else

//     for (int i = 0; i < (count - 1) / 2; i++)
//     {
//         cout << data[i] + data[count - i - 1] << " ";
//     }
//     if (count % 2 == 0)
//         cout << data[count / 2] + data[count / 2 - 1];
//     else
//         cout << data[count / 2];
// }
// int bethunhi(int data[], int count)
// {
//     int min, min2;
//     min = data[0] > data[1] ? data[1] : data[0];
//     min2 = data[0] + data[1] - min;
//     for (int i = 2; i < count; i++)
//     {
//         if (data[i] < min)
//         {
//             min2 = min;
//             min = data[i];
//         }
//         else if (data[i] < min2)
//         {
//             min2 = data[i];
//         }
//     }
//     return min2;
// }
// int sumMatrix(int **M, int rows, int cols)
// {
//     int sum = 0;
//     for (int i = 0; i < rows; i++)
//         for (int j = 0; j < cols; j++)
//             sum += M[i][j];
//     return sum;
// }
// int diagonalUp(int **M, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//         for (int j = i; j < n; j++)
//             sum += M[i][j];
//     return sum;
// }
// void add(int **matrix1, int **matrix2, int **matrix3, int row, int col)
// {
//     for (int i = 0; i < row; i++)
//         for (int j = 0; j < col; j++)
//             matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
// }
// int multiply(int **matrix1, int row1, int col1,
//              int **matrix2, int row2, int col2,
//              int **matrix3, int &row3, int &col3)
// {
//     if (col1 != row2)
//         return -1;
//     row3 = row1;
//     col3 = col2;
//     for (int i = 0; i < row3; i++)
//         for (int j = 0; j < col3; j++)
//         {
//             matrix3[i][j] = 0;
//             for (int k = 0; k < row2; k++)
//                 matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
//         }
//     return 1;
// }
// int main()
// {
//     int **p;
//     int m, n;
//     int data[] = {3, 2, 1, 4, 5, 6, 7};
//     inputMatrix(p, m, n);
//     // int count = 5;
//     // printByPattern(data, count);
//     cout << bethunhi(data, 7);
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    // nhập số dòng, cột
    cout << "Nhap so dong: ";
    cin >> row;
    cout << "Nhap so cot: ";
    cin >> col;

    // cấp phát động
    int **arr = new int *[row]; // Cấp phát vùng nhớ cho ROW con trỏ kiểu (int *): dòng
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col]; // Mỗi con trỏ kiểu (int *) sẽ quản lý COL phần tử kiểu int: cột
    }

    // nhập mảng 2 chiều
    cout << "Nhap mang:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // xuất mảng 2 chiều
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Giải phóng vùng nhớ cho từng phần tử mảng
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    // Giải phóng cho mảng
    delete[] arr;

    system("pause");
    return 0;
}
