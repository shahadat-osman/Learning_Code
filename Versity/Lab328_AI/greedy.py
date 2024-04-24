heuristics = {'Arad' : 366,
'Bucharest' : 0,
'Craiova' : 160,
'Drobeta' : 242,
'Eforie' : 161,
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

def bfs(heu, graph, start, end):
    path = []
    path.append(start)
    final = heu[start]
    list = graph[start]
    value = list[0]
    while final != 0:
        min = heu[list[0]]
        str = list[0]
        for i in range(1, len(list)):
            c = heu[list[i]]
            if c < min :
                min = c
                str = list[i]
        a = str
        path.append(a)
        list = graph[a]
        final = heu[a]
    if path[-1] == 'Bucharest':
        print(path)
    else :
        print("No path Available")

           

start = input("Enter Start city: ")
end = "Bucharest"

print("The Path is:")
bfs(heuristics, Rmap, start, end)