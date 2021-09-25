void reverse(int* first, int* last)
{
    if  (first < last) {
        int temp = *last;
        *last = *first;
        *first = temp;
        reverse(++first, --last);
    }
}