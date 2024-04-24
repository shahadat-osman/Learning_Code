def A_star(heu, graph, start, end):
    if start not in heu or end not in heu:
        print("Invalid start or end city!")
        return

    open_list = [(0 + heu[start], start)]  # Priority queue with initial cost and start node
    closed_set = set()
    came_from = {}  # To track the path
    g_score = {node: float('inf') for node in heu}
    g_score[start] = 0

    while open_list:
        open_list.sort()  # Sort by cost
        current_cost, current_node = open_list.pop(0)

        if current_node == end:
            path = [end]
            while current_node != start:
                current_node = came_from[current_node]
                path.append(current_node)
            path.reverse()
            print("The Path is:", ' -> '.join(path))
            print("The Cost is:", g_score[end])
            return

        closed_set.add(current_node)

        for neighbor, weight in graph[current_node].items():
            tentative_g_score = g_score[current_node] + weight
            if tentative_g_score < g_score[neighbor]:
                came_from[neighbor] = current_node
                g_score[neighbor] = tentative_g_score
                f_score = tentative_g_score + heu[neighbor]
                if neighbor not in closed_set:
                    open_list.append((f_score, neighbor))

    print("No path found to destination!")

heuristics = {
    'A': 7,
    'B': 3,
    'C': 4,
    'D': 5,
    'E': 2,
    'G': 0,
}

Rmap = {
    'A': {'B': 3, 'C': 7},
    'B': {'A': 3, 'D': 4},
    'C': {'A': 7, 'D': 6, 'E': 2},
    'D': {'B': 4, 'C': 6, 'E': 5},
    'E': {'C': 2, 'D': 5, 'G': 6},
    'G': {'E': 6}
}

start_node = input("Enter the start node: ")
end_node = 'G'  # Destination node is 'G'

A_star(heuristics, Rmap, start_node, end_node)
