#include <iostream>

// [this] captures all data members

// Note: Capturing *this in C++ 17
// Earlier, we could only capture this pointer by reference. 
// This leads to problems when the referenced object is temporary or goes out of scope leading to the dangling reference.
// The capture of *this by value was added in C++ 17 to avoid these problems.

template <typename T, size_t sz, typename callback>
void ForEach(T (&arr)[sz], callback operation) {
    for (int i = 0; i < sz; ++i) {
        operation(arr[i]);
    }
}

class cost {
    public:
        cost(const float cp) : price(cp) {}

        int GetPrice() const {return price;}
        void AddTaxes() {
            float taxes[] {12, 5, 5};
            float basePrice {price};

            ForEach(taxes, [basePrice, this](auto x){
                    float p = basePrice * x/100; 
                    price += p;
                });
        }
    private:
        float price;
};

int main() {
    using namespace std;

    cost c1{500};
    c1.AddTaxes();
    cout << c1.GetPrice();

    return 0;
}