heuristics = {
'A' : 7,
'B' : 3,
'C' : 4,
'D' : 5,
'E' : 2,
'G' : 0,
}

Rmap = {
    'A': {'B' : 3 , 'C' : 7},
    'B': {'A' : 3 , 'D' : 4},
    'C': {'A' : 7 , 'D' : 6, 'E': 2},
    'D': {'B' : 4 , 'C' : 6, 'E' : 5},
    'E': {'C' : 2 , 'D' : 5, 'G' : 6},
    'G': {'E' : 6}
}
Rmap_n = {
    'A': ['B', 'C'],
    'B': ['A', 'D'],
    'C': ['A', 'D', 'E'],
    'D': ['B', 'C', 'E'],
    'E': ['C' , 'D' , 'G' ],
    'G': ['E']
}

def A_star (heu, map, mn, start, end):
    path = []
    path.append(start)
    tracks = mn[start]
    finish = start
    c_nod = start
    value = 0
    v_list = []
    
    
    while finish != end:
        for i in range (len(tracks)):
            d = heu[tracks[i]] + map[c_nod][tracks[i]] + value
            v_list.append(d)
        min = v_list[0]
        n_nod = tracks[0]
        c = 0
        for i in range(1, len(tracks)):
            if v_list[i] < min:
                min = v_list[i]
                n_nod = tracks[i]
                c = i
        v_list = []
        value = value + map[c_nod][tracks[c]]
        path.append(n_nod)
        finish = n_nod
        tracks = mn[n_nod]
        c_nod = n_nod

    print("The Path is:\n", path)
    print("The Cost is: ", value)


start = input("Enter city: ")
end = "G"

A_star(heuristics, Rmap, Rmap_n ,start, end)