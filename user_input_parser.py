#from variables.py import *
#pip install pyspellchecker
from spellchecker import SpellChecker
spell = SpellChecker()
user_input = 2
user_input = 2

def parse_user_into_list(user_input): # good to fuck can refine later
    return user_input.lower().split(" ")
    #NEEDS REGEX to parse out words like yesss or yeswecan

def fix_spelling_list(user_input):
    for word in range(len(user_input)):
        misspelled_words = spell.unknown(user_input[word])
        user_input[word] = spell.correction(user_input[word])
    return user_input

    #library for regex parse?
def affirmative_bool(user_input):
    affirmative_list = ["positive","affirmative","yes","yeah","sure", "tried",'yes', 'yes', 'yeah', 'yeah', 'yup', 'yup', 'y', 'y', 'yea','yea','ye','ye']
    #case issue + spelling+ edge case 'yesss' needs regex parse round yeswecam
    #https://stackoverflow.com/questions/29536683/split-string-by-two-conditions-wildcard
    negative_list = ['negative','no', 'no', 'nope', 'nope', 'n', 'n', 'nah', 'nah']
    #element of list compare
    if bool(set(user_input).intersection(affirmative_list)) == True:
        #print("pos")
        return 1
    if bool(set(user_input).intersection(negative_list)) == True:
        return 0
        #print("neg")
    else:
        #print("None")
        return 1

def main():
    print("python main function")
    #pip install pyspellchecker
    #test
    user_input = 'yes Ive reset the network settings'
    user_input = 'My phone dont work no nore ben'
    user_input = parse_user_into_list(user_input)
    user_input = fix_spelling_list(user_input)
    affirmative_bool(user_input)
    print(user_input)

if __name__ == '__main__':
    main()

"A dictionary is an associative array (also known as hashes). Any key of the dictionary is associated (or mapped) to a value."
"serialize every site input"
"needs to be easy to output to csv large what do you need to capture user interaction/convo"

inputs.csv -> outputs.csv
 a simple csv of inputs would look like
 0, " help me   " , convo id , cust id , output key #can parse/split response as read out
 2, " help me 1 " , convo id , cust id
 4, " help me 2 " , convo id , cust id

needs to be human readable as
 0, " help me   " , convo id , cust id ,
 1, " computer generated response "
 google, chat bot data, https://blog.ubisend.com/optimise-chatbots/chatbot-training-data
create lexicon using bash like apii calls
find notes!

data gathered during inqury
ios version , 15.5.1
should be columnar information
ios version
15.5.1
make social troubleshooting site see who you are helping. do video chat say 
