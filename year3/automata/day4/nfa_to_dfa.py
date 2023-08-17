nfa = []
nfa.append( [[0],[0,1]])
nfa.append( [[2],[2]])
nfa.append( [[],[]])
def print_nfa(nfa):
    for i in range(len(nfa)):
        for j in range(len(nfa[i])):
            for k in range(len(nfa[i][j])):
                print("q"+str(i),end=" " )
            print()

print_nfa(nfa)
