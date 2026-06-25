class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<float, float>> cars;
        int length = position.size();
        int fleets = 0;

        cars.reserve(length);

        for(int i = 0; i < length; i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());

        float prev_time = 0;
        for(pair<float, float> car : cars){
            float time = (target - car.first)/car.second;

            if(time < prev_time || time == prev_time){
                continue;
            }else{
                fleets++;
                prev_time = time;
            } 
        }

        return fleets;
    }
};
