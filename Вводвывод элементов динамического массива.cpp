for (int i = 0; i < 10; i++)
{
    cout << "b[" << i << "] = ";
    cin >> *(b + i);
}

for (int i = 0; i < 10; i++)
    cout << "b[" << i << "] = " << *(b + i) << endl;