#include <vector>

bool isBadVersion(int n);

int first_bad_version(int n)
{
    if(n==1) return 1;
    std::vector<bool> values(n);
    std::vector<bool> ready(n);

    int l = 0, r = n;
    while(l<=r)
    {
        int mid = l + (r - l) / 2;
        //for minimizing API calls save in memorizing ds
        bool isBad_mid = ready[mid] ? values[mid] :  isBadVersion(mid);
        bool isBad_after = ready[mid + 1] ? values[mid+1] : isBadVersion(mid+1);
        ready[mid] = true; values[mid] = isBad_mid;
        ready[mid+1] = true; values[mid+1] = isBad_after;

        if(!isBad_mid && isBad_after) return mid+1;
        else if(isBad_mid) r = mid-1;
        else if(!isBad_mid) l = mid+1;
    }
    return -1;
}


int main()
{



    return 0;
}
