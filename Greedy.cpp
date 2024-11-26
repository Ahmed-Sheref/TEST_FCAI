#include <bits/stdc++.h>

#define ll long long int
#define for1(x1) for(ll i = 0; i < x1; i++)
#define for2(x2) for(ll j = 0; j < x2; j++)
#define for3(vc_1) for(auto &it : vc_1) cin >> it;
#define so(x3) sort((x3).begin(), (x3).end())
// #define rev(x3) reverse((x3).begin(), (x3).end())
#define nl endl
#define nb "\n"
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(container) (container).begin(), (container).end()
using namespace std;

istream& operator>> (istream &input, vector <ll> &vc_1)
{
    for3(vc_1);
    return input;
}

const ll mod = 1e9 + 7;
const int N = 2e5 + 5;  

vector<int> adj[N];     
bool vis[N];      


ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

ll mult(ll a, ll b)
{
    return (a%mod * b%mod)%mod;
}

ll add(ll a, ll b)
{
    return (a%mod + b%mod)%mod;
}

ll subtract(ll a, ll b)
{
    return (a%mod - b%mod + 2*mod)%mod;
}



char di[] = {'D', 'L', 'U', 'R'};
int dx[] = {1, 0, -1, 0, -1, -1, 1, 1};
int dy[] = {0, -1, 0, 1, -1, 1, -1, 1};


void ahmedsheref2288()
{
    vector <ll> vc_1 = {9,10,11,12,13,15};
    vector <ll> vc_2 = {11,11,12,14,15,16};
    vector <ll> vc_3;
    vc_3.emplace_back(0);
    ll arr1 = 1;
    ll arr2 = 0;
    for1(vc_1.size())
    {
        if (vc_1[arr1] >= vc_2[arr2])
        {
            vc_3.emplace_back(arr1);
            arr2 = arr1;
            arr1++;
        }
        else
            arr1++;
    }
}

// Example: nums.erase(remove(nums.begin(), nums.end(), Player1), nums.end());

int main()
{
    fast_IO;
    ll test_case = 1;
    // cin >> test_case;
    while(test_case--)
    {
        ahmedsheref2288();
    }
    return 0;
}
