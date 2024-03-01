#include <iostream>
#include <unordered_map>
#include <vector>


    

int main() {
  int t;
    std::cin >> t;
    for (int _ = 0; _ < t; ++_) {
        int z;
        std::unordered_map<int, int> m;
        std::cin >> z;
        std::vector<int> a(z);
        for (int i = 0; i < z; ++i) {
            std::cin >> a[i];
            m[a[i]]++;
        }
        
        
        int rt = 0;
        for (int i = 0; i < 31; ++i) {
            rt += 1 << i;
        }
        int ans = 0;
        for (int i = 0; i < z; ++i) {
            if (m[rt - a[i]] != 0 && m[a[i]] != 0) {
                ans++;
                m[rt - a[i]]--;
                m[a[i]]--;
            }
        }
        std::cout << z - (2 * ans) + ans << std::endl;
    }

    
    return 0;
}

