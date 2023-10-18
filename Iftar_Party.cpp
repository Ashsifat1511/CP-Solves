       #include <bits/stdc++.h>

    using namespace std;

    int main(){
        int tc,t(1);
        for(scanf("%d",&tc); tc; ++t,--tc){
            long long piaju,left;

            scanf("%lld%lld", &piaju,&left);

            if(left*2>=piaju){
                printf("Case %d: impossible\n",t);
                continue;
            }
            printf("Case %d:",t);


            long long piajuEaten = piaju-left;
           vector<long long> possibleValueOfQ;
            for(long long i=1; i*i<=piajuEaten; ++i)
                if(piajuEaten%i==0){
                    possibleValueOfQ.push_back(i);

                if(piaju/i!=i)
                    possibleValueOfQ.push_back(piajuEaten/i);
                }

           sort(possibleValueOfQ.begin(), possibleValueOfQ.end());
            for(auto x: possibleValueOfQ)
                 if(x>left)
                    printf(" %lld",x);


            printf("\n");
        }

        return 0;
    }
