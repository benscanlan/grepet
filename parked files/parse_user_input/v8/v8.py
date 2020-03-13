#pip install pyspellchecker
from spellchecker import SpellChecker
spell = SpellChecker()
#device
iPhone7 = None
#component
#keyword
bluetooth = None
#troubleshoot
network_reset = None
latest_software = None
apple_logo_screen = None
iPhone7 = None
session_device = None
session_component = None
session_issue = None

#test
user_input = "yes I’ve reset the network settings"
user_input = "My phone dont work no nore ben"

issue_keyword_list=[] ################
# def network_reset()
#     if keyword bluetooth and iphone 7:
#         return output("reset network settings") or dictionary Value

def parse_user_input(user_input): # good to fuck can refine later

    parsed_user_input = user_input.lower().split(" ")
    #NEEDS REGEX to parse out words like yesss or yeswecan

    # find those words that may be misspelled
    for word in range(len(parsed_user_input)):
        print(parsed_user_input[word])
        misspelled_words = spell.unknown(parsed_user_input[word])
        parsed_user_input[word] = spell.correction(parsed_user_input[word])

    #library for regex parse?

    print(parsed_user_input)
    affirmative_list = ["positive","affirmative","yes","yeah","sure", "tried",'yes', 'yes', 'yeah', 'yeah', 'yup', 'yup', 'y', 'y', 'yea','yea','ye','ye']
    #case issue + spelling+ edge case 'yesss' needs regex parse round yeswecam
    #https://stackoverflow.com/questions/29536683/split-string-by-two-conditions-wildcard
    negative_list = ['negative','no', 'no', 'nope', 'nope', 'n', 'n', 'nah', 'nah']
    #element of list compare
    if bool(set(parsed_user_input).intersection(affirmative_list)) == True:
        print("pos")
        return 1
    if bool(set(parsed_user_input).intersection(negative_list)) == True:
        return 0
        print("neg")
    else:
        print("None")
        return None


# Driver code
#user_input = input()
parse_user_input(user_input)

if (bluetooth == 1 and iPhone7 == 1):
    print("Have you tried resetting network settings?")
    if parse_user_input == 1:
        latest_software = 1
if(None):
    print("Are you up to date with the latest iOS software available for your device?")
    if parse_user_input == 1:
        latest_software = 1

if(None):
    print("what device?")
    #parse context
