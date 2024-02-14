#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class PersComp {
private:
    string name;
    int hrz;
public:
    PersComp(const string& n, int h) : name(n), hrz(h) {}

    string get_name() const {
        return name;
    }

    int get_hrz() const {
        return hrz;
    }

    void print() const {
        cout << "Processor is " << name << " and its Hrz is " << hrz << endl;
    }
    bool operator<(const PersComp& pc) const {
        return hrz > pc.hrz;
    }
};

int main() {
    vector<PersComp> comps = {
      PersComp("Intel i3", 345),
      PersComp("Ryzen", 550),
      PersComp("Intel i7", 700)
    };

    sort(comps.begin(), comps.end());

    for (const auto& pc : comps) {
        pc.print();
    }

    return 0;
}