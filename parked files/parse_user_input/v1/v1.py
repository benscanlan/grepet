#mark user with cookie: cookies help us if we get disconnected
#chat should be a file its building reading and writing to
# order does not matter can give best guesses and then gather more info as it goes.
# what if all my questions were functions?
# parse user issue:
# 	get device info:
# 	So you have {device} is that correct?
# 	device component issue
# 	suggest 1 troubleshooting step
##################### ##################### #####################
import random
#--------------------- --------------------- ---------------------

device_list = ['iPhone 3','iPhone 4','iPhone 5','iPhone SE','iPhone 6','iPhone 7','iPhone 8','iPhone X','iPhone 11']
#print(device_list)

# Need to catigorize responses
    #questions
    #troubleshooting step
    #etc
# response txt lines are loaded into an array
with open("responses.txt", 'r') as fo:
    responses = fo.readlines()
count = len(responses)
#print(responses)

component_list=[]

issue_keyword_list[]
issue_list=[]
#need to be statistically correlated
solutions_list=[] # asertained into stats values database when solved

session_device=0
session_component=0
session_issue=0
#--------------------- --------------------- ---------------------
def parse_user_issue():
    return NULL
def respond(input):
    output = responses[random.randint(0,count-1)]
    return output
#--------------------- --------------------- ---------------------

# output
# while not solved
#     respond
##################### ##################### #####################
issue = 0
print("How can I help?")
while issue != "solved":
    says = input()
    print(respond(says))
    if says == "yes":
        issue = "solved"
