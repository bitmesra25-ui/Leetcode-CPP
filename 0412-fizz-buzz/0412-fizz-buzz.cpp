class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>s;
        for(int i=1;i<=n;i++){
             if(i%3==0 && i%5==0){
                s.push_back("FizzBuzz");
            }
            else if(i%5==0){
                 s.push_back("Buzz");
            }
            else if(i%3==0 ){
                 s.push_back("Fizz");
            }
            else{
                string str=to_string(i);
                 s.push_back(str);
            }
        }
        return s;
    }
};