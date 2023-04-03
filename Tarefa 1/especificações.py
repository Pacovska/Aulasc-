from typing import List

class Node:
    def __init__(self, id: int, parent: int):
        if parent > id:
            # Se o id do pai é maior que o id do nó, lança uma exceção de valor inválido
            raise ValueError("O id do pai não pode ser maior que o id do nó")
        if parent == id:
            # Se o id do pai é igual ao id do nó, lança uma exceção de valor inválido
            raise ValueError("O id do pai não pode ser igual ao id do nó")
        self.id = id
        self.parent = parent

    def __repr__(self):
        # Retorna uma string representando o objeto no formato: "Node(id, parent)"
        return f"Node({self.id}, {self.parent})"

class NodeManager:
    def __init__(self, nodes: List[Node]):
        self.nodes = nodes.copy()
        # Verifica se a lista recebida contém somente objetos Node
        if not all(isinstance(n, Node) for n in nodes):
            # Se algum objeto não for Node, lança uma exceção de valor inválido
            raise ValueError("A lista deve conter somente objetos do tipo Node")

    def __len__(self):
        # Retorna o tamanho da lista de nodes
        return len(self.nodes)

    def __getitem__(self, index):
        # Retorna um objeto Node pelo índice
        return self.nodes[index]

    def remove(self, node: Node):
        # Verifica se o objeto Node existe na lista
        if node not in self.nodes:
            # Se não existe, lança uma exceção de valor inválido
            raise ValueError("O nó não existe na lista de nodes")
        # Remove o objeto Node da lista de nodes
        self.nodes.remove(node)

    def remove_cascade(self, node: Node):
        # Verifica se o objeto Node existe na lista
        if node not in self.nodes:
            # Se não existe, lança uma exceção de valor inválido
            raise ValueError("O nó não existe na lista de nodes")
        # Cria uma lista de nós a serem removidos
        nodes_to_remove = [node]
        # Itera pela lista de nós
        for n in self.nodes:
            # Se o nó atual é filho do nó a ser removido, adiciona à lista de nós a serem removidos
            if n.parent == node.id:
                nodes_to_remove.append(n)
        # Enquanto existirem nós a serem removidos, itera pela lista
        while nodes_to_remove:
            # Remove o primeiro nó da lista de nós a serem removidos
            current_node = nodes_to_remove.pop(0)
            # Remove o nó atual da lista de nodes
            self.nodes.remove(current_node)
            # Itera pela lista de nós novamente
            for n in self.nodes:
                # Se o nó atual é filho do nó atualmente removido, adiciona à lista de nós a serem removidos
                if n.parent == current_node.id:
                    nodes_to_remove.append(n)
