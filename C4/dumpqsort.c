/* qsort:  sort v[left]...v[right] into increasing order */
void qsort(int v[], int left, int right)
{
    int i, last;
    void swap(int v[], int i, int j);

    if (left >= right)   /* do nothing if array contains */
        return;          /* fewer than two elements */
    dump("sort", v, left, right);
    swap(v, left, (left + right)/2); /* move partition elem */
    dump("swapped", v, left, right);
    last = left;                     /* to v[0] */
    for (i = left+1; i <= right; i++)   /* partition */
        if (v[i] < v[left])
            swap(v, ++last, i);
    swap(v, left, last);         /* restore partition elem */
    qsort(v, left, last-1);
    qsort(v, last+1, right);
}

int dump(char *dir , int *v , int left, int right ) {
  int i;
  printf("%s %d %d %d:  ", dir, left, right, (left+right)/2);
    for (i = left; i <= right; i++) { printf("  %d", v[i]); }
    printf("\n");
  return 0;
}

