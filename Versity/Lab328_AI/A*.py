heuristics = {'Arad' : 366,
'Bucharest' : 0,
'Craiova' : 160,
'Drobeta' : 242,
'Elorie' : 161,
'Fagaras' : 176,
'Giurgin' : 77,
'Hirsova' : 151,
'Iasi' : 226,
'Lugoj' : 244,
'Mehadia' : 241,
'Neamt' : 234,
'Oradea' : 380,
'Pitesti' : 100,
'Rimnicu' : 193,
'Sibiu' : 253,
'Timisoara' : 329,
'Urziceni' : 80,
'Vaslui' : 199,
'Zerind' : 374
}

Rmap = {
    'Arad': {'Sibiu' : 140 , 'Zerind' : 75, 'Timisoara' : 118},
    'Zerind': {'Arad' : 75, 'Oradea' : 71},
    'Oradea': {'Zerind' : 71, 'Sibiu' : 151},
    'Sibiu': {'Arad': 140, 'Oradea' : 151, 'Fagaras' : 99, 'Rimnicu' : 80},
    'Timisoara': {'Arad' : 118, 'Lugoj' : 111},
    'Lugoj': {'Timisoara' : 111, 'Mehadia' : 70},
    'Mehadia': {'Lugoj' : 70, 'Drobeta' : 75},
    'Drobeta': {'Mehadia' : 75 , 'Craiova' : 120},
    'Craiova': {'Drobeta' : 120, 'Rimnicu' : 146, 'Pitesti' : 138},
    'Rimnicu': {'Sibiu': 80, 'Craiova' : 146, 'Pitesti' : 97},
    'Fagaras': {'Sibiu': 99, 'Bucharest' : 211},
    'Pitesti': {'Rimnicu' : 97, 'Craiova' : 138, 'Bucharest' : 101},
    'Bucharest': {'Fagaras': 211, 'Pitesti' : 101, 'Giurgiu' : 90, 'Urziceni': 85},
    'Giurgiu': {'Bucharest': 90},
    'Urziceni': {'Bucharest' : 85, 'Vaslui' : 142 , 'Hirsova' : 98},
    'Hirsova': {'Urziceni' : 98, 'Eforie' : 86},
    'Eforie': {'Hirsova' : 86},
    'Vaslui': {'Iasi' : 92, 'Urziceni': 142},
    'Iasi': {'Vaslui': 92, 'Neamt': 87},
    'Neamt': {'Iasi': 87 }
}
Rmap_n = {
    'Arad': ['Sibiu', 'Zerind', 'Timisoara'],
    'Zerind': ['Arad', 'Oradea'],
    'Oradea': ['Zerind', 'Sibiu'],
    'Sibiu': ['Arad', 'Oradea', 'Fagaras', 'Rimnicu'],
    'Timisoara': ['Arad', 'Lugoj'],
    'Lugoj': ['Timisoara', 'Mehadia'],
    'Mehadia': ['Lugoj', 'Drobeta'],
    'Drobeta': ['Mehadia', 'Craiova'],
    'Craiova': ['Drobeta', 'Rimnicu', 'Pitesti'],
    'Rimnicu': ['Sibiu', 'Craiova', 'Pitesti'],
    'Fagaras': ['Sibiu', 'Bucharest'],
    'Pitesti': ['Rimnicu', 'Craiova', 'Bucharest'],
    'Bucharest': ['Fagaras', 'Pitesti', 'Giurgiu', 'Urziceni'],
    'Giurgiu': ['Bucharest'],
    'Urziceni': ['Bucharest', 'Vaslui', 'Hirsova'],
    'Hirsova': ['Urziceni', 'Eforie'],
    'Eforie': ['Hirsova'],
    'Vaslui': ['Iasi', 'Urziceni'],
    'Iasi': ['Vaslui', 'Neamt'],
    'Neamt': ['Iasi']
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
end = "Bucharest"

A_star(heuristics, Rmap, Rmap_n ,start, end)