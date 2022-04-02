

def findSmallestRegion(regions, region1, region2):
        parents = {}
        for r in regions:
            for i in range(1, len(r)):
                parents[r[i]] = r[0]

        nodes = set([region1])
        p = region1
        while p in parents:
            p = parents[p]
            # remember to put the top region
            nodes.add(p)

        q = region2
        while q not in nodes:
            q = parents[q]
        return q



regions = [
["Earth","North America","South America"],
["North America","United States","Canada"],
["United States","New York","Boston"],
["Canada","Ontario","Quebec"],
["South America","Brazil"],
]


region1 = "Quebec"
region2 = "New York"




print(findSmallestRegion(regions, region1, region2))