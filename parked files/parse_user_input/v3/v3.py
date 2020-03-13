network_reset = 0
latest_software = None
apple_logo_screen = None

import random


device_list = ['iPhone 3','iPhone 4','iPhone 5','iPhone SE','iPhone 6','iPhone 7','iPhone 8','iPhone X','iPhone 11']
#check device() returns if iphone 7 etc in case structure.
#bools for everything including devices.

# If we iterate through the case statements it will be a dynamic flow chart can always default to ask about unknown variables

#false should be 0
#unknow should be null

with open("responses.txt", 'r') as fo:
    responses = fo.readlines()
count = len(responses)


component_list=[]

issue_list=[]
#need to be statistically correlated
solutions_list=[] # ascertained into stats values database when solved

session_device = "unknown"
session_component = "unknown"
session_issue = "unknown"
#--------------------- --------------------- ---------------------
def parse_user_issue():
    return NULL
def respond(input):
    output = responses[random.randint(0,count-1)]
    return output
#middleware
def output(v):
    print(v)
#--------------------- --------------------- ---------------------


issue_keyword_list=[] ################
#need meta class for formulating a question
#no
#if these variables toggled then try trouble shoting step
#i need lile a default decesion tree pree loaded with cases if the following variables then wuestion or trouble shooting step change variable that step completed.

#three possible responses from user input
#different resets
#needs to analyaze keywords in issue
#give response

#1 need to build trouble shooting keyword list
#2 count and selsest close pick


print("How can I help?")
while issue != "solved":
    says = input()
    print(respond(says))
    if says == "yes":
        issue = "solved"

#if we have if list its going to do same over and over inless var modified var with all steps don't worry about programatic effiecney right now



#v3 Code
#switch statement

def network_reset()
    if keyword bluetooth and iphone 7:
        return output("reset network settings") or dictionary Value
