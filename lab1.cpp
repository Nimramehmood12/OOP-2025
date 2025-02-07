// Nimra Mehmood
// 24K-0807
// #include <iostream>
// #include <cstring>
// using namespace std;

// struct Employee
// {
//     string name;
//     int hoursWorked;
//     double hourlyRate;
// };

// void input(Employee *e, int no)
// {
//     for (int i = 0; i < no; i++)
//     {
//         cout << "Enter details of employee " << i + 1 << ":\n";
//         cout << "Name: ";
//         cin.ignore();
//         getline(cin, e[i].name);

//         cout << "Hours worked " << ": ";
//         cin >> e[i].hoursWorked;

//         cout << "Hourly Rate" << ": ";
//         cin >> e[i].hourlyRate;
//     }
// }

// void salary(Employee *e, int no)
// {
//     cout << "\nEmployee Salary Details:\n";
//     for (int i = 0; i < no; i++)
//     {
//         double totalSalary = e[i].hoursWorked * e[i].hourlyRate;
//         cout << "Name: " << e[i].name << " | HoursWorked: " << e[i].hoursWorked << " | HoursRate: " << e[i].hourlyRate << " | Total salary: " << totalSalary << endl;
//     }
// }

// void release(Employee *e)
// {
//     delete[] e;
//     cout << "Memory has been released.\n";
// }
// int main()
// {
//     int no;
//     cout << "Enter the number of employees:";
//     cin >> no;

//     Employee *e = new Employee[no];

//     input(e, no);
//     salary(e, no);
//     release(e);

//     return 0;
// }

// Nimra Mehmood
// // 24K-0807
// #include <iostream>
// using namespace std;

// int **dma(int rows, int cols)
// {
//     int **mat = new int *[rows];
//     for (int i = 0; i < rows; i++)
//     {
//         mat[i] = new int[cols];
//     }
//     return mat;
// }

// void input(int **mat, int rows, int cols)
// {
//     cout << "Enter elements of matrix (" << rows << "x" << cols << "):\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> mat[i][j];
//         }
//     }
// }

// int **add(int **matA, int **matB, int rows, int cols)
// {
//     int **result = dma(rows, cols);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             result[i][j] = matA[i][j] + matB[i][j];
//         }
//     }
//     return result;
// }

// int **subtract(int **matA, int **matB, int rows, int cols)
// {
//     int **result = dma(rows, cols);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (matA[i][j] > matB[i][j])
//             {
//                 result[i][j] = matA[i][j] - matB[i][j];
//             }
//             else
//             {
//                 result[i][j] = matB[i][j] - matA[i][j];
//             }
//         }
//     }
//     return result;
// }

// void display(int **mat, int rows, int cols, string name)
// {
//     cout << name << " matrix:\n";
//     for (int i = 0; i < rows; i++)
//     {
//         cout << " | ";
//         for (int j = 0; j < cols; j++)
//         {
//             cout << mat[i][j] << " | ";
//         }
//         cout << endl;
//     }
// }

// void release(int **mat, int rows)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         delete[] mat[i];
//     }
//     delete[] mat;
//     // cout<<"The memeory has been released";
// }
// int main()
// {
//     int rows, cols;

//     cout << "Enter number of rows and column: ";
//     cin >> rows >> cols;

//     int **matA = dma(rows, cols);
//     int **matB = dma(rows, cols);

//     input(matA, rows, cols);
//     input(matB, rows, cols);

//     int **sum = add(matA, matB, rows, cols);
//     int **difference = subtract(matA, matB, rows, cols);

//     display(sum, rows, cols, "Sum");
//     display(difference, rows, cols, "Difference");

//     release(matA, rows);
//     release(matB, rows);
//     release(sum, rows);
//     release(difference, rows);
//     cout << "The memeory has been released";
//     return 0;
// }

// // Nimra Mehmood
// // 24K-0807
// #include <iostream>
// using namespace std;

// void input(string *array, int no)
// {
//     cin.ignore();
//     for (int i = 0; i < no; i++)
//     {
//         cout << "Enter string " << i + 1 << ": ";
//         getline(cin, array[i]);
//     }
// }

// void display(string *array, int no, string name)
// {
//     cout << "\n"
//          << name << ":\n";
//     for (int i = 0; i < no; i++)
//     {
//         cout << array[i] << endl;
//     }
// }

// void sort(string *array, int no)
// {
//     for (int i = 0; i < no - 1; i++)
//     {
//         for (int j = 0; j < no - i - 1; j++)
//         {
//             if (array[j] > array[j + 1])
//             {
//                 string temp;
//                 temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
// }

// void release(string *array)
// {
//     delete[] array;
// }

// int main()
// {
//     int no;
//     cout << "Enter the number of strings: ";
//     cin >> no;

//     string *array = new string[no];

//     input(array, no);
//     display(array, no, "Original strings");
//     sort(array, no);
//     display(array, no, "Sorted strings");
//     release(array);

//     cout << "Memory has been released.\n";
//     return 0;
// }

// Nimra Mehmood
//  24K-0807
// #include <iostream>
// using namespace std;

// void input(int *array, int no)
// {
//     cout << "Enter values:";
//     for (int i = 0; i < no; i++)
//     {
//         cin >> *(array + i);
//     }
// }

// void display(int *array, int no)
// {
//     cout << "Array of elements:";
//     for (int i = 0; i < no; i++)
//     {
//         cout << *(array + i) << " ";
//     }
//     cout << endl;
// }

// int sumArray(int *array, int no)
// {
//     int sum = 0;
//     for (int i = 0; i < no; i++)
//     {
//         sum += *(array + i);
//     }
//     return sum;
// }

// int main()
// {
//     int no;
//     cout << "Enter the number of elements:";
//     cin >> no;

//     int *array = new int[no];

//     input(array, no);

//     display(array, no);

//     int total = sumArray(array, no);
//     cout << "Sum of array elements: " << total << endl;

//     delete[] array;
//     cout << "Memory has beeen released.\n";
//     return 0;
// }

// // Nimra Mehmood
// //  24K-0807
// #include <iostream>
// using namespace std;

// struct Student
// {
//     string name;
//     int rollNumber;
//     int marks[3];
// };

// void input(Student *s, int no)
// {
//     for (int i = 0; i < no; i++)
//     {
//         cout << "\nEnter details for student" << i + 1 << ":\n";
//         cout << "Name:";
//         cin.ignore();
//         getline(cin, s[i].name);
//         cout << "Roll number:";
//         cin >> s[i].rollNumber;
//         cout << "Enter marks in 3 subjects:";
//         for (int m = 0; m < 3; m++)
//         {
//             cin >> s[i].marks[m];
//         }
//     }
// }

// float average(int marks[])
// {
//     int sum = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         sum += marks[i];
//     }
//     return sum / 3;
// }

// void display(Student *s, int no)
// {
//     cout << "Student Details:\n";
//     for (int i = 0; i < no; i++)
//     {
//         cout << "------------------------------\n";
//         cout << "Name:" << s[i].name << "\n"
//              << "Rollnumber:" << s[i].rollNumber << "\n"
//              << "Marks:" << s[i].marks[0] << "," << s[i].marks[1] << "," << s[i].marks[2] << endl;
//         cout << "Average Marks:" << average(s[i].marks) << endl;
//     }
// }
// int main()
// {
//     int no;
//     cout << "Enter the number of students:";
//     cin >> no;

//     Student *s = new Student[no];

//     input(s, no);

//     display(s, no);

//     delete[] s;
//     cout << "Memory has been released.\n";

//     return 0;
// }

// // Nimra Mehmood
// //   24K-0807
// #include <iostream>
// using namespace std;

// int **dma(int rows, int cols)
// {
//     int **mat = new int *[rows];
//     for (int i = 0; i < rows; i++)
//     {
//         mat[i] = new int[cols];
//     }
//     return mat;
// }

// void input(int **mat, int rows, int cols)
// {
//     cout << "Enter elements for (" << rows << "x" << cols << ")matrix\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> *(*(mat + i) + j);
//         }
//     }
// }

// void display(int **mat, int rows, int cols)
// {
//     cout << "Matrix\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << *(*(mat + i) + j) << "|";
//         }
//         cout << endl;
//     }
// }

// int **multiply(int **mat1, int **mat2, int rows1, int cols1, int rows2, int cols2)
// {
//     int **result = dma(rows1, cols2);
//     for (int i = 0; i < rows1; i++)
//     {
//         for (int j = 0; j < cols2; j++)
//         {
//             *(*(result + i) + j) = 0;
//             for (int k = 0; k < cols1; k++)
//             {
//                 *(*(result + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));
//             }
//         }
//     }
//     return result;
// }

// void free(int **mat, int rows)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         delete[] mat[i];
//     }
//     delete[] mat;
// }
// int main()
// {
//     int rows1, cols1, rows2, cols2;

//     cout << "Enter dimensions of first matrix:";
//     cin >> rows1 >> cols1;
//     cout << "Enter dimensions of second matrix:";
//     cin >> rows2 >> cols2;

//     if (cols1 != rows2)
//     {
//         cout << "Matrix multiplication is not possible.\n";
//         return 0;
//     }
//     int **mat1 = dma(rows1, cols1);
//     int **mat2 = dma(rows2, cols2);

//     input(mat1, rows1, cols1);
//     input(mat2, rows2, cols2);

//     cout << "First Matrix\n";
//     display(mat1, rows1, cols1);

//     cout << "Second Matrix\n";
//     display(mat2, rows2, cols2);

//     int **result = multiply(mat1, mat2, rows1, cols1, rows2, cols2);

//     cout << "\nResult ";
//     display(result, rows1, cols2);

//     free(mat1, rows1);
//     free(mat2, rows2);
//     free(result, rows1);
// }

// Nimra Mehmood
//   24K-0807
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of an array:";
//     cin >> n;

//     int **arr = new int *[n];

//     cout << "Enter " << n << " integer numbers:\n";
//     for (int i = 0; i < n; i++)
//     {
//         *(arr + i) = new int;
//         cin >> *(*(arr + i));
//     }

//     cout << "Array elements:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << *(*(arr + i)) << " | ";
//     }
//     cout << endl;

//     for (int i = 0; i < n; i++)
//     {
//         delete[] *(arr + i);
//     }
//     delete[] arr;
//     cout << "Memory has been released.\n";

//     return 0;
// }

// // Nimra Mehmood
// //   24K-0807
// #include <iostream>
// using namespace std;

// struct Product {
//     int productID;
//     char name[50];
//     int quantity;
//     float price;
// };

// void input(Product *inventory,int n){
//      for (int i = 0; i < n; i++) {
//         cout << "\nEnter details for Product " << i + 1 << ":\n";
//         cout << "Product ID: ";
//         cin >> inventory[i].productID;
//         cout << "Name: ";
//         cin.ignore();
//         cin.getline(inventory[i].name, 50);
//         cout << "Quantity: ";
//         cin >> inventory[i].quantity;
//         cout << "Price: ";
//         cin >> inventory[i].price;
//     }
// }

// float total(Product *inventory,int n){
//     float totalValue = 0;
//     for(int i=0;i<n;i++){
//     float productValue = inventory[i].quantity * inventory[i].price;
//     totalValue += productValue;
//     return totalValue;
//     }
// }

// void display(Product *inventory,int n){
//         cout<<"Product Inventory:\n";
//         cout<<"-----------------------------------\n";
//         for (int i = 0; i < n; i++) {
//         cout << "Product ID: " << inventory[i].productID << "\n";
//         cout << "Name: " << inventory[i].name << "\n";
//         cout << "Quantity: " << inventory[i].quantity << "\n";
//         cout << "Price: $" << inventory[i].price << "\n";
//         cout << "-----------------------------------\n";
//     }

//     cout << "Total Inventory Value: $" << total(inventory,n) << "\n";

// }
// int main() {
//     int n;
//     cout << "Enter the number of products: ";
//     cin >> n;

//     Product* inventory = new Product[n];

// input(inventory,n);
// display(inventory,n);

//     // Step 5: Deallocate memory
//     delete[] inventory;
//     cout << "Memory has been released.\n";

//     return 0;
// }

// Nimra Mehmood
//   24K-0807
#include <iostream>
using namespace std;

int ***dma(int a, int b, int c)
{
    int ***array = new int **[a];
    for (int i = 0; i < a; i++)
    {
        array[i] = new int *[b];
        for (int j = 0; j < b; j++)
        {
            array[i][j] = new int[c];
        }
    }
    return array;
}

void input(int ***array, int a, int b, int c)
{
    cout << "Enter " << a * b * c << " values";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout << "Enter [" << i << "][" << j << "][" << k << "]:";
                cin >> array[i][j][k];
            }
        }
    }
}
void display(int ***array, int a, int b, int c)
{
    cout << "\n 3D array Elements:\n";
    for (int i = 0; i < a; i++)
    {
        cout << "Side" << i + 1 << ":\n";
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout << array[i][j][k] << " | ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
void free(int ***array, int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            delete[] array[i][j];
        }
        delete[] array[i];
    }
    delete[] array;
    cout << "Memory has been released.";
}
int main()
{
    int a, b, c;
    cout << "Enter elements a b c:";
    cin >> a >> b >> c;

    int ***array = dma(a, b, c);

    input(array, a, b, c);

    display(array, a, b, c);

    free(array, a, b);
    return 0;
}