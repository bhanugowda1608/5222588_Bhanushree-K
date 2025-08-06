void plusMinus(int arr_count, int arr) {
int pos = 0, neg = 0, zero = 0;
for(int i = 0; i  arr_count; i++)
{
    if (arr[i]0)
    pos++;
    else if(arr[i]0)
    neg++;
    else
     zero++;
}
printf(%.6fn, (float)pos  arr_count);
printf(%.6fn, (float)neg  arr_count);
printf(%.6fn, (float)zero  arr_count);


}