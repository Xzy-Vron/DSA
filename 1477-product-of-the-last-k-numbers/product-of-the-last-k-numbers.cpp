class ProductOfNumbers {
public:
    vector<long long int> product = {1};

    ProductOfNumbers() {}
    
    void add(int num) {
        if (num == 0) {
            product = {1};
        } else {
            product.push_back(product.back() * num);
        }
    }
    
    int getProduct(int k) {
        if (k >= product.size()) return 0;
        else {
            return product[product.size()-1]/product[product.size()-k-1];
        } 
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */