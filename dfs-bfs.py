graph={
    '5': ['3','2'],
    '3': ['1'],
    '4': [],
    '2': ['4','1'],
    '1': []
}

visited=set()

def dfs(visited,graph,node):
    if node not in visited:
        print(node)
        visited.add(node)
        for n in graph[node]:
            dfs(visited,graph,n)
 
graph1 = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8'],
  '8' : []
}

visited1=[]
queue=[]

def bfs(visited1,graph1,node):
    visited1.append(node)
    queue.append(node)
    while queue:
        m=queue.pop(0)
        print(m,end=" ")
        for n in graph[m]:
            if n not in visited1:
               visited1.append(n) 
               queue.append(n)
            
print("depth first search : ")
dfs(visited,graph1,'5')
print("breadth first search : ")
bfs(visited1,graph,'5')
