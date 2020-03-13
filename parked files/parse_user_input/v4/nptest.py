from nltk.parse import RecursiveDescentParser
from nltk import Nonterminal, nonterminals, Production, CFG

grammar = CFG.fromstring("""

   N -> 'yes'
   N -> 'yeah'
   N -> 'no'
   V -> 'chased'
   V -> 'sat'
   P -> 'in'
   P -> 'on'
   """)
rd = RecursiveDescentParser(grammar)
sentence1 = 'yes the cat chased the dog'.split()
sentence2 = 'no the cat chased the dog on the rug'.split()
for t in rd.parse(sentence1):
    print(t)
