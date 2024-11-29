#!/usr/bin/python3
"""You have n number of locked boxes in front of you.
Each box is numbered sequentially from 0 to n - 1
and each box may contain keys to the other boxes.
- boxes is a list of lists
- A key with the same number as a box opens that box
- You can assume all keys will be positive integers
- There can be keys that do not have boxes
- The first box boxes[0] is unlocked
- Return True if all boxes can be opened, else return False"""


def canUnlockAll(boxes):
# si la liste de boîtes est vide
    if not boxes:
        return False
# si la liste n'est pas une liste
    if not isinstance(boxes, list):
        return False
# si il n'y a qu'une boîte
    if len(boxes) == 1:
        return True

    open = {0}  # j'ouvre la boite 0
    keys = set(boxes[0])  # je regarde les clés dans la boite

    while keys:
        key = keys.pop() # je prends une clé
        if key not in open and 0 <= key < len(boxes): # Si la clé n'ouvre pas une boîte déjà ouverte et si la clé correspond à une boîte
            open.add(key)
            keys.update(boxes[key])
# je verifie que chaque boite à été ouverte
    if len(keys) == len(boxes):
        return True
    return False
