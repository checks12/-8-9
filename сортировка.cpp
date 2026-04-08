void sort(mas *a, int n)
{
    mas temp;
    int i, j;

    for(i = 0; i < n - 1; i++)
        for (j = n - 1; j > i; j--)
            if (a[j].key < a[j - 1].key)
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
}