##include<iostream>
using namespace std;
int count = 0;
class execute
{
    int** m;
    int row, col;
public:
    execute()
    {
        row = col = 0;
        m = NULL;
    }
    execute(int r, int c);
    void getmatrix(int i, int j, int value)
    {
        m[i][j] = value;
    }
    int displaymatrix(int i, int j)
    {
        return m[i][j];
    }
    void addmatrix(execute&, execute&);
    ~execute()
    {
        cout << "Destructor invoked\n";
        for (int i = 0; i < row; i++)
        {
            delete m[i];
        }
        delete m;
        cout << "Object " << count << " is destroyed \n";
        count--;
    }
};
execute::execute(int r, int c)
{
    cout << "Constructor invoked\n";
    row = r;
    col = c;
    m = new int* [row];
    for (int i = 0; i < row; i++)
    {
        m[i] = new int[col];
    }count++;
    cout << "Object " << count << " created \n";
}

void execute::addmatrix(execute& O1, execute& O2)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            m[i][j] = O1.m[i][j] + O2.m[i][j];
        }
    }
    cout << "Resultant matrix is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Entering in main function\n";
    int row1, col1, row2, col2, i, j, value;
    cout << "1.Add matrix:\n";
    cout << "Enter rows and columns of the first matrix:\n";
    cin >> row1 >> col1;
    execute O1(row1, col1);
    cout << "Enter first matrix elements:\n";
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            cout << "Enter[" << i + 1 << "][" << j + 1 << "]element:";
            cin >> value;
            O1.getmatrix(i, j, value);
        }
    }
    cout << "Enter rows and columns of second matrix:\n";
    cin >> row2 >> col2;
    execute O2(row2, col2);
    cout << "Enter second matrix elements:\n";
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            cout << "Enter[" << i + 1 << "][" << j + 1 << "]element:";
            cin >> value;
            O2.getmatrix(i, j, value);
        }
    }
    execute O(row1, col1);
    if (row1 == row2 && col1 == col2)
    {
        cout << "Addition of matrix:\n";
        O.addmatrix(O1, O2);
    }
    else
        cout << "Matrix addition not possible!!\n";
    return 0;
}
