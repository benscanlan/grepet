import string
#device
iPhone7 = None
#component
#keyword
bluetooth = None
keyword_list = []
#troubleshoot
network_reset = None
latest_software = None
apple_logo_screen = None
iPhone7 = None
session_device = None
session_component = None
session_issue = None

#test
user_input = "Yes I’ve reset the network settings"

issue_keyword_list=[] ################
# def network_reset()
#     if keyword bluetooth and iphone 7:
#         return output("reset network settings") or dictionary Value

def parse_user_input(user_input):
    #convert String to a List
    #example parsed_user_input = list(string.split(" ")) # don't know why list is used
    parsed_user_input = user_input.split(" ")
    #print(parsed_user_input)
    affirmative_list = ["Yes","yeah","sure", "tried",'yes', 'Yes', 'yeah', 'Yeah', 'yup', 'Yup', 'y', 'Y', 'yea',
'Yea']#case issue + spelling
    negative_list = ['No', 'no', 'Nope', 'nope', 'N', 'n', 'Nah', 'nah']
    #element of list compare
    if bool(set(parsed_user_input).intersection(affirmative_list)) == True:
        print("yes")
        return 1
    if bool(set(parsed_user_input).intersection(negative_list)) == True:
        return 0
    else:
        return None


# Driver code
parse_user_input(user_input)

if (bluetooth == 1 and iPhone7 == 1):
    print("Have you tried reseting network settings?")
    #if yes or no parse
    latest_software = 1
if(None):
    print("Are you up to date with the latest iOS software available for your device?")
    #if yes or no parse
    latest_software = 1

if(None):
    print("function whatdevice() run on every early argument.")
