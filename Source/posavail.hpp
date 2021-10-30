
bool ispa(list <int> arr, list <int> arr2, int a)
{
    if(find(arr.begin(), arr.end(), a) != arr.end() ) return true;
    else if (find(arr2.begin(), arr2.end(), a) != arr2.end()) return true;
    else return false;
}
