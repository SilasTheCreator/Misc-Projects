#Chess Program because why not
#Libraries
import itertools
import copy
import inspect
WHITE = "white"
BLACK = "black"
gamespace = None

def KingInSight(kingposi, piecelist, overridegamespace = None):
    global gamespace
