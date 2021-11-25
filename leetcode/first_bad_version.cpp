#include <vector>

bool isBadVersion(int n);

int first_bad_version(int n)
{
    int start = 1, end = n;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (isBadVersion(mid)) {
                end = mid ;
            } else {
                start = mid + 1;
            }
        }
        return start;
}


int main()
{



    return 0;
}
