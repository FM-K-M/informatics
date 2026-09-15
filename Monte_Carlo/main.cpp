#include <iostream>
#include <random>

using namespace std;

double func(const double& x){
    return x*x * -1 + 5; 
}

int main(){
    int inner, total = 0;
    int num_of_dots;

    cout << "Enter num_of_dots: ";

    cin >> num_of_dots;

    int min_x = 0;
    float max_x = sqrt(5.0f);
    float max_y = 5.0f;
    float min_y = 0.0f;

    float target = 7.45356f;

    float Area = (max_y - min_y) * (max_x - min_x);

    

    while (total < num_of_dots){

        random_device rd;
        mt19937 gen(rd());

        uniform_real_distribution<double> distrib_x(min_x, max_x);
        uniform_real_distribution<double> distrib_y(min_y, max_y);
    
        double rand_x = distrib_x(gen);
        double rand_y = distrib_y(gen);

        //cout << "rand_x: " << rand_x << " rand_y: " << rand_y << '\n';

        if (rand_y <= func(rand_x)){
            inner++;
        }

        total++;
    }


    float result = Area * inner / total;
    cout << "The result is: " << result << '\n';
    cout << "Error: " << abs(target - result)/target * 100 << '%';

    return 0;
}