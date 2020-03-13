# -*- coding: utf-8 -*-
#pip install pyspellchecker
from functions import *
#test
user_input = 'yes Ive reset the network settings'
user_input = 'My phone dont work no nore ben'
user_input = parse_user_into_list(user_input)
user_input = fix_spelling_list(user_input)
affirmative_bool(user_input)
print(user_input)
