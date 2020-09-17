#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b)
{
	return a.first>b.first;
}
int main () {
	int n;
	cin>>n;
	vector<pair<int,int> >v;
	for(int i=0;i<n;i++)
	{
		int d,f;
		cin>>d>>f;
		v.push_back(make_pair(d,f));
	}
	int D,F;
	cin>>D>>F;
	sort(v.begin(),v.end(),compare);
	for(int i=0;i<n;i++)
	{
		v[i].first=D-v[i].first;
	}

	priority_queue<int>q;
	int x=0,ans=0,cf=F;
	int flag=0,prev=0;
	while(x<n)
	{
		if(cf>=(v[x].first-prev))
        {
            cf=cf-(v[x].first-prev);
            q.push(v[x].second);
            prev=v[x].first;
        }
        else{
            if(q.empty())
            {
                flag=1;
                break;
            }
            cf+=q.top();
            q.pop();
            ans++;
            continue;
        }
        x++;
	}
	
	D=D-v[n-1].first;
	
	while(cf<D)
	{
		if(q.empty())
		{
			flag=1;
			break;
		}
		else{
			cf+=q.top();
			ans++;
			q.pop();
			continue;
		}
	}
	if(flag==1)
	{
		cout<<"-1";
	}
	else{
		cout<<ans<<endl;
	}

	return 0;
}